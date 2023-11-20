#include "framelessWidget.h"
#include "ui_framelessWidget.h"
#include<QPainterPath>
#include<QFileDialog>
#include<QDir>
#include<QStackedWidget>
#include <QRegularExpression>

#include <QPixmap>
#include <QIcon>
#include<QLabel>
#include"iflytek.h"


framelessWidget::framelessWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::framelessWidget)
{
    ui->setupUi(this);

    //ui->mainWidget->setMouseTracking(true); // 允许鼠标跟踪
    //ui->mainDisplayWidget->setMouseTracking(true);
    //setMouseTracking(true);

    //派蒙
    ui->paimeng_1->hide();
    //ui->paimeng_2->hide();
    ui->paimeng_3->hide();
    ui->paimeng_4->hide();
    ui->paimeng_5->hide();


    QTimer *t = new QTimer(this);
    connect(t, &QTimer::timeout, this, [=](){Init();});
    t->setSingleShot(true);
    t->start(10);
    this->setAttribute(Qt::WA_TranslucentBackground);  //设置父窗口为透明


    ui->record_pushButton->setRole(Material::Secondary);
    ui->play_pushButton->setStyleSheet("image: url(:/resource/image/play.png);");


    multimedia = new Multimedia(this);
    m_recognizer = new recognizer();


    connect(ui->Button_max, &QPushButton::clicked, this, [=]()  // 点击最大化按钮
    {
        controlWindowScale();
    });
    connect(ui->Button_min, &QPushButton::clicked, this,[=]()   // 点击最小化按钮
    {
        this->showMinimized();
    });
    connect(ui->Button_close,&QPushButton::clicked, this,[=]()  // 点击关闭按钮
    {
        this->close();
    });

    //语音识别完成信号
    connect(this,&framelessWidget::recognize_finished,this,&framelessWidget::talk_to_spark);
    //connect(this,&framelessWidget::recognize_finished,this,&framelessWidget::do_tts);
    //语音合成完成信号
    connect(this,&framelessWidget::spark_finished,this,&framelessWidget::do_tts);

    //复选框状态改变信号
    connect(ui->voice1_checkBox,&QCheckBox::stateChanged,this,&framelessWidget::onCheckBoxStateChanged);
    connect(ui->voice2_checkBox,&QCheckBox::stateChanged,this,&framelessWidget::onCheckBoxStateChanged);
    connect(ui->voice3_checkBox,&QCheckBox::stateChanged,this,&framelessWidget::onCheckBoxStateChanged);


    //播放列表双击信号
    connect(ui->listWidget,&QListWidget::itemDoubleClicked,this,&framelessWidget::onItemDoubleClicked);
    //双击后播放
    connect(multimedia, &Multimedia::double_Clicked_play, this, [=](){
        ui->play_pushButton->setStyleSheet("image: url(:/resource/image/pause.png);");
    });

    // 获取播放音乐的总时长
    connect(multimedia->player, &QMediaPlayer::durationChanged, this, [=](qint64 duration) {
        ui->total_label->setText(QString::asprintf("%02d:%02d", duration / 60000, duration / 1000 % 60));
        ui->playerSlider->setRange(0, duration);
    });

    // 拖动滑块改变音乐播放进度
    connect(ui->playerSlider, &QSlider::sliderPressed, this, [&]() {
        sliderPressed = true; // 设置标志为true，表示滑块被按下
    });

    connect(ui->playerSlider, &QSlider::sliderReleased, this, [=]() {
        sliderPressed = false; // 设置标志为false，表示滑块被释放
        qint64 pos = ui->playerSlider->value(); // 获取滑块当前位置
        multimedia->player->setPosition(pos); // 设置音乐播放进度
    });

    // 获取当前播放音乐的进度
    connect(multimedia->player, &QMediaPlayer::positionChanged, this, [=](qint64 pos) {
        if (!sliderPressed) { // 只有在滑块未被按下时才更新滑块的值和标签
            ui->current_label->setText(QString::asprintf("%02d:%02d", pos / 60000, pos / 1000 % 60));
            ui->playerSlider->setValue(pos);
        }
    });

    ui->volumeSlider->setRange(0, 100); // 设置滑块的范围
    // 设置滑块的初始值
    ui->volumeSlider->setValue(40);
    // 设置音量，拖动滑块改变音量
    connect(ui->volumeSlider,&QSlider::sliderMoved,this,[=](int value){
        multimedia->player->setVolume(value);
    });

    //歌曲播放完后自动播放下一首
    connect(multimedia->player, &QMediaPlayer::mediaStatusChanged, this, [=](QMediaPlayer::MediaStatus status){
        if(status == QMediaPlayer::EndOfMedia) {
            on_next_pushButton_clicked();
        }
    });

//    //音频可视化
    visualAudio();




}

framelessWidget::~framelessWidget()
{
    delete ui;
}


void framelessWidget::visualAudio()
{
    //实现频谱图可视化音频
    const QAudioDeviceInfo inputDevice = QAudioDeviceInfo::defaultInputDevice();
    if (inputDevice.isNull()) {
        QMessageBox::warning(nullptr, "audio",
                             "There is no audio input device available.");
    }
    m_chart = new QChart;
    m_series = new QLineSeries;
    m_chart->setTheme(QChart::ChartThemeDark);
    QChartView *chartView = new QChartView(m_chart);
    //chartView->setBackgroundBrush(Qt::transparent);
    //chartView->setRenderHint(QPainter::Antialiasing);
    m_chart->addSeries(m_series);
    QValueAxis *axisX = new QValueAxis;
    axisX->setRange(0, XYSeriesIODevice::sampleCount);
    axisX->setLabelFormat("%g");
    axisX->setVisible(false);  // 隐藏 X 轴
    QValueAxis *axisY = new QValueAxis;
    axisY->setRange(-0.4, 0.4);
    axisY->setVisible(false);  // 隐藏 X 轴
    m_chart->addAxis(axisX, Qt::AlignBottom);
    m_series->attachAxis(axisX);
    m_chart->addAxis(axisY, Qt::AlignLeft);
    m_series->attachAxis(axisY);
    m_chart->legend()->hide();


    QVBoxLayout *mainLayout = new QVBoxLayout(ui->visualAudio_widget);  // 使用垂直布局

    QHBoxLayout *horizontalLayout = new QHBoxLayout;  // 使用水平布局

    // 创建左侧的空白项，它会占据左侧的空白区域
    QSpacerItem *leftSpacer = new QSpacerItem(80, 0);
    horizontalLayout->addSpacerItem(leftSpacer);

    horizontalLayout->addWidget(chartView);  // 将chartView添加到水平布局中

    // 创建右侧的空白项，它会占据右侧的空白区域
    QSpacerItem *rightSpacer = new QSpacerItem(80, 0);
    horizontalLayout->addSpacerItem(rightSpacer);

    mainLayout->addLayout(horizontalLayout);  // 将水平布局添加到垂直布局中

    // 设置主窗口的布局管理器
    ui->visualAudio_widget->setLayout(mainLayout);




//    // 调整频谱图的位置
//    chartView->move(500, 700);
//    chartView->setFixedSize(900, 90);  // 设置频谱图的固定大小

    QAudioFormat formatAudio;
    formatAudio.setSampleRate(3000);
    formatAudio.setChannelCount(1);
    formatAudio.setSampleSize(8);
    formatAudio.setCodec("audio/pcm");
    formatAudio.setByteOrder(QAudioFormat::LittleEndian);
    formatAudio.setSampleType(QAudioFormat::UnSignedInt);

    m_audioInput = new QAudioInput(inputDevice, formatAudio, this);

    m_device = new XYSeriesIODevice(m_series, this);
    m_device->open(QIODevice::WriteOnly);

    m_audioInput->start(m_device);
}

/* 给centralwidget添加一个mainwidget，设置遮罩及遮挡锯齿边缘的board*/
void framelessWidget::Init()
{
// 获取遮罩的轮廓并给mainWidget设置遮罩
// 遮罩的作用是重叠的部分才可以看到
#ifdef Q_OS_LINUX
    QPainterPath path;
    path.addRect(ui->mainWidget->rect());
#else
    QPainterPath path;
    path.addRoundedRect(ui->mainWidget->rect(), cornerRadius-1 , cornerRadius-1 );
#endif
    QRegion mask(path.toFillPolygon().toPolygon());
    ui->mainWidget->setMask(mask);
    // 给mainwidget添加样式
    QString mainStyle;
    ui->mainWidget->setObjectName("mainWidget");
    mainStyle = "QWidget#mainWidget{background-color:rgb(251, 251, 251)"  + QString::asprintf(";border-radius:%dpx", cornerRadius) + "}";
    ui->mainWidget->setStyleSheet(mainStyle);
#if (QT_VERSION >= QT_VERSION_CHECK(6,0,0))
#ifdef Q_OS_WINDOWS
    windowShadow = new QGraphicsDropShadowEffect(this);
    windowShadow->setBlurRadius(30);
    windowShadow->setColor(QColor(0, 0, 0));
    windowShadow->setOffset(0, 0);
    ui->mainWidget->setGraphicsEffect(windowShadow);
#endif
#endif
    /**********************************************************/

    /* 添加border的 widget以遮盖锯齿边缘 */
#ifdef Q_OS_WINDOWS
    border = new QWidget(this);
    border->move(ui->mainWidget->pos() - QPoint(1, 1));
    border->resize(ui->mainWidget->size() + QSize(2, 2));
    QString borderStyle;
    borderStyle = "background-color:#00FFFFFF;border:1.5px solid #686868; border-radius:" + QString::asprintf("%d",cornerRadius) + "px";
    border->setStyleSheet(borderStyle);
    border->setAttribute(Qt::WA_TransparentForMouseEvents);
    border->show();
#endif
    /*****************************************************************/



}

// 鼠标按下事件(记录拉伸窗口或移动窗口时的起始坐标（左上角）)
void framelessWidget::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        mousePressed = true;
#if (QT_VERSION >= QT_VERSION_CHECK(6,0,0))
        lastPos = event->globalPosition().toPoint() - this->frameGeometry().topLeft();
#else
        lastPos = event->globalPos() - this->frameGeometry().topLeft();
#endif
    }
}

// 鼠标移动事件
void framelessWidget::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() == Qt::NoButton)
        mousePressed = false;
    if(!mousePressed){ // 鼠标没按下移动，更新鼠标位置状态
        mouseState = 0;
        if(!maximized && abs(event->pos().x() - ui->mainWidget->pos().x()) < 5)
            mouseState |= AT_LEFT;
        if(!maximized && abs(event->pos().y() - ui->mainWidget->pos().y()) < 5)
            mouseState |= AT_TOP;
        if(!maximized && abs(event->pos().x() - ui->mainWidget->pos().x() - ui->mainWidget->width()) < 5)
            mouseState |= AT_RIGHT;
        if(!maximized && abs(event->pos().y() - ui->mainWidget->pos().y() - ui->mainWidget->height()) < 5)
            mouseState |= AT_BOTTOM;
        if(mouseState == AT_TOP_LEFT  || mouseState == AT_BOTTOM_RIGHT)
            setCursor(Qt::SizeFDiagCursor);
        else if(mouseState == AT_TOP_RIGHT || mouseState == AT_BOTTOM_LEFT)
            setCursor(Qt::SizeBDiagCursor);
        else if(mouseState & (AT_LEFT | AT_RIGHT))
            setCursor(Qt::SizeHorCursor);
        else if(mouseState & (AT_TOP | AT_BOTTOM))
            setCursor(Qt::SizeVerCursor);
        else
            unsetCursor();
    }
    else{ //鼠标按下移动
        if(mouseState == 0){
            if(maximized){
                qreal wRatio = (double)event->pos().x() / (double)ui->mainWidget->width();
                controlWindowScale();
#if (QT_VERSION >= QT_VERSION_CHECK(6,0,0))
                this->move(QPoint(event->globalPosition().x() - ui->mainWidget->width() * wRatio, -30));
#else
                this->move(QPoint(event->globalPos().x() - ui->mainWidget->width() * wRatio, -30));
#endif
                lastPos = QPoint(ui->mainWidget->width() * wRatio, event->pos().y());
            }
            else
#if (QT_VERSION >= QT_VERSION_CHECK(6,0,0))
                this->move(event->globalPosition().toPoint() - lastPos);
#else
                this->move(event->globalPos() - lastPos);
#endif
        }
        else{
#if (QT_VERSION >= QT_VERSION_CHECK(6,0,0))
            QPoint d = event->globalPosition().toPoint() - frameGeometry().topLeft() - lastPos;
#else
            QPoint d = event->globalPos() - frameGeometry().topLeft() - lastPos;
#endif
            if(mouseState & AT_LEFT){
                this->move(this->frameGeometry().x() + d.x(), this->frameGeometry().y());
                this->resize(this->width() - d.x(), this->height());
            }
            if(mouseState & AT_RIGHT){
                this->resize(this->width() + d.x(), this->height());
            }
            if(mouseState & AT_TOP){
                this->move(this->frameGeometry().x(), this->frameGeometry().y() + d.y());
                this->resize(this->width(), this->height() - d.y());
            }
            if(mouseState & AT_BOTTOM){
                this->resize(this->width(), this->height() + d.y());
            }
        }
#if (QT_VERSION >= QT_VERSION_CHECK(6,0,0))
        lastPos = event->globalPosition().toPoint() - this->frameGeometry().topLeft();
#else
        lastPos = event->globalPos() - this->frameGeometry().topLeft();
#endif
    }
}

// 窗口变化事件
void framelessWidget::resizeEvent(QResizeEvent *event)
{
//    //Resize border
//    if(border)
//        border->resize(ui->mainWidget->size() + QSize(2, 2));

//    //Resize mask
//    QPainterPath path;
//#ifdef Q_OS_WINDOWS
//    path.addRoundedRect(ui->mainWidget->rect(), cornerRadius - 1, cornerRadius - 1);
//#else
//    path.addRect(ui->mainWidget->rect());
//#endif
//    QRegion mask(path.toFillPolygon().toPolygon());
//    ui->mainWidget->setMask(mask);

    //Resize all pages
//    for(int i = 0; i < pageList.size(); i++){
//        pageList[i]->resize(ui->mainWidget->width() * 0.4 < pageList[i]->preferWidth ? pageList[i]->preferWidth - 1 : ui->mainWidget->width() * 0.4 - 1, ui->mainWidget->height());
//        pageList[i]->resize(pageList[i]->width() + 1, pageList[i]->height());
//    }
}

//点击最大化按钮事件
void framelessWidget::controlWindowScale(){
#ifdef Q_OS_WINDOWS
    if(!maximized){
        lastGeometry = this->frameGeometry();
      //  windowShadow->setEnabled(false);
        ui->verticalLayout->setContentsMargins(0, 0, 0, 0);
        border->hide();
        QString mainStyle = "QWidget#mainWidget{background-color:rgb(251,251,251) border-radius:0px;}";
        ui->mainWidget->setStyleSheet(mainStyle);
        this->showMaximized();
        maximized = true;
        QPainterPath path;
        path.addRect(ui->mainWidget->rect());
        QRegion mask(path.toFillPolygon().toPolygon());
        ui->mainWidget->setMask(mask);
    }
    else{
        ui->verticalLayout->setContentsMargins(30, 30, 30, 30);
        this->showNormal();
        QString mainStyle = "QWidget#mainWidget{background-color:rgb(251,251,251)" + QString::asprintf(";border-radius:%dpx", cornerRadius) + "}";
        ui->mainWidget->setStyleSheet(mainStyle);
        QPainterPath path;
        path.addRoundedRect(ui->mainWidget->rect(), cornerRadius - 1, cornerRadius - 1);
        QRegion mask(path.toFillPolygon().toPolygon());
        ui->mainWidget->setMask(mask);
        border->show();
     //   windowShadow->setEnabled(true);
        this->resize(lastGeometry.width(), lastGeometry.height());
        this->move(lastGeometry.x(), lastGeometry.y());
        maximized = false;
    }
#endif
}


bool framelessWidget::nativeEvent(const QByteArray &eventType, void *message, long *result)
{
    MSG *msg = static_cast<MSG *>(message);

    if (msg->message == WM_USER + 1) {
        // 处理接收到的消息，你可以在这里执行相应的操作
        qDebug() << "Received message from C++ program!";

        ui->record_pushButton->setHaloVisible(true);

        QString path = "C:/Code/Qt/Audio/Audio/record/i am here.wav";

        multimedia->play(path);

        ui->paimeng_1->show();
        ui->paimeng_2->hide();
        ui->paimeng_3->hide();

        multimedia->startRecord();
        QTimer::singleShot(3000, this, &framelessWidget::on_record_pushButton_released);

        return true;
    }

    return false;
}

void framelessWidget::testVoice()
{
    ui->paimeng_4->show();
    ui->paimeng_1->hide();
    ui->paimeng_2->hide();
    ui->paimeng_3->hide();
    ui->paimeng_5->hide();
    multimedia->startRecord();
}



void framelessWidget::on_dir_pushButton_clicked()
{
    auto path = QFileDialog::getExistingDirectory(this,"选择文件","C:\\Users\\ly134\\Music");
    //操作该目录下的文件
    QDir dir(path);
    auto musicList = dir.entryList(QStringList()<<"*.mp3"<<"*.wav"<<"*.flac",QDir::Files); //获取该目录下的mp3，wav格式的文件
    qInfo()<<musicList;
    ui->listWidget->addItems(musicList);

    ui->listWidget->setCurrentRow(0);

    //将音乐完整的路径保存下来
    for(auto music:musicList)
    {
        music = path + "/" + music;
        playList.append(music);
    }
    qInfo()<<playList;
}


void framelessWidget::on_iflytek_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void framelessWidget::on_recommend_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void framelessWidget::on_song_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void framelessWidget::on_record_pushButton_pressed()
{
    ui->paimeng_4->show();
    ui->paimeng_1->hide();
    ui->paimeng_2->hide();
    ui->paimeng_3->hide();
    ui->paimeng_5->hide();
    ui->record_pushButton->setHaloVisible(true);
    qDebug()<<"start record";
    multimedia->startRecord();
}

void framelessWidget::on_record_pushButton_released()
{
    ui->record_pushButton->setHaloVisible(false);
    qDebug()<<"stop record";
    multimedia->stopRecord();

    //开始识别
    QString res;
    res = m_recognizer->runIAT("C:/Code/Qt/Audio/Audio/record/output.wav");
    qDebug() << "识别结果：" << res;
    ui->iat_result->setText(res);

    ui->paimeng_1->hide();

    if(res.contains("下一首"))
    {
        qDebug() << "匹配命令成功：下一首";
        on_next_pushButton_clicked();
        QString response="好的主人，已经为您切换至下一首音乐";
        ui->iflytek->setText(response);
        do_tts();
        return;
    }
    else if(res.contains("上一首"))
    {
        qDebug()<<"匹配命令成功，上一首";
        on_pre_pushButton_clicked();
        QString response="好的主人，已经为您切换至上一首音乐";
        ui->iflytek->setText(response);
        do_tts();
        return;
    }
    else if(res.contains("暂停") || res.contains("停止"))
    {
        qDebug()<<"匹配命令成功，暂停";

        on_play_pushButton_clicked();
        QString response="好的主人，已经为您暂停音乐";
        ui->iflytek->setText(response);
        do_tts();
        return;
    }
    else if(res.contains("播放"))
    {
        qDebug()<<"匹配命令成功，播放";
        on_play_pushButton_clicked();
        QString response="好的主人，已经为您播放音乐";
        ui->iflytek->setText(response);
        do_tts();
        return;
    }

    else if(res.contains("记事本") && res.contains("hello world"))
    {
        // 设置Python脚本文件路径
        QString pythonScriptPath = "C:/Code/Qt/Audio/Audio/scripts/openTxt.py";

        // 创建QProcess对象
        QProcess process;

        // 设置执行的命令为python，并传递脚本文件路径作为参数
        process.start("python", QStringList() << pythonScriptPath);

        // 等待进程完成
        process.waitForFinished(-1);
        return;
    }

    else if(res.contains("记事本") && res.contains("你好啊"))
    {
        // 设置Python脚本文件路径
        QString pythonScriptPath = "C:/Code/Qt/Audio/Audio/scripts/openTxt2.py";

        // 创建QProcess对象
        QProcess process;

        // 设置执行的命令为python，并传递脚本文件路径作为参数
        process.start("python", QStringList() << pythonScriptPath);

        // 等待进程完成
        process.waitForFinished(-1);
        return;
    }

    else if(res.contains("网站"))
    {
        // 设置Python脚本文件路径
        QString pythonScriptPath = "C:/Code/Qt/Audio/Audio/scripts/openWeb.py";

        // 创建QProcess对象
        QProcess process;

        // 设置执行的命令为python，并传递脚本文件路径作为参数
        process.start("python", QStringList() << pythonScriptPath);

        // 等待进程完成
        process.waitForFinished(-1);
        return;
    }

    else if(res.contains("视频"))
    {
        // 设置Python脚本文件路径
        QString pythonScriptPath = "C:/Code/Qt/Audio/Audio/scripts/openWeb2.py";

        // 创建QProcess对象
        QProcess process;

        // 设置执行的命令为python，并传递脚本文件路径作为参数
        process.start("python", QStringList() << pythonScriptPath);

        // 等待进程完成
        process.waitForFinished(-1);
        return;
    }

    else if(res.contains("退出") || res.contains("关闭"))
    {
        qDebug()<<"匹配命令成功，退出";
        QString response="好的主人，已经为您退出";
        ui->iflytek->setText(response);
        do_tts();
        this->close();
        return;
    }

    emit recognize_finished();
}

void framelessWidget::do_tts()
{
//    QString iflytek_result = ui->iflytek->toPlainText();
//    QString path = "C:/Code/Qt/Audio/Audio/iflytek_SDK/iflytek_voice.wav";
//    m_recognizer->tts(&iflytek_result,&path);

    if(ui->iat_result->toPlainText().isEmpty())
    {
        qDebug() << "识别结果为空，不进行语音合成！";
        return;
    }

    QString tts_text = ui->iflytek->toPlainText();

    ui->paimeng_4->show();
    ui->paimeng_1->hide();
    ui->paimeng_2->hide();
    ui->paimeng_3->hide();
    ui->paimeng_5->hide();

    QByteArray utf8Data = tts_text.toLocal8Bit();
    //QTextCodec* codec = QTextCodec::codecForName("GB2312");
    //QByteArray gb2312Data = codec->fromUnicode(utf8Data);
    const char* src_text = utf8Data.constData();
    m_recognizer->select = select_voice;
    int tts_bool = m_recognizer->tts(src_text, "C:/Code/Qt/Audio/Audio/record/iflytek_voice.wav");
    if (tts_bool == 0)
    {
        qDebug() << "语音合成成功！";
    }
    else
    {
        qDebug() << "语音合成失败！";

    }
    qDebug() << "语音合成内容为！"<< tts_text;
    qDebug() << "语音合成内容为！"<< tts_text.toStdString().c_str();

    qDebug()<< "语音合成内容为！"<< tts_bool;



    qDebug() << "ret"<< tts_bool;
    QString path = "C:/Code/Qt/Audio/Audio/record/iflytek_voice.wav";
    multimedia->play(path);
    ui->paimeng_4->hide();
    ui->paimeng_1->hide();
    ui->paimeng_2->hide();
    ui->paimeng_3->show();
    ui->paimeng_5->hide();

}

void framelessWidget::talk_to_spark()
{
    iflytek *thread = new iflytek();
    thread->userInput = ui->iat_result->toPlainText();
    connect(thread, &iflytek::processFinished, this, &framelessWidget::onProcessFinished);
    thread->start();
}

void framelessWidget::onProcessFinished(const QString &input, const QString &output)
{
    ui->iflytek->setText(output);

    // 在Qt中输出Python的返回消息
    qDebug() << "User Input: " << input;
    qDebug() << "Python Output: " << output;
    emit spark_finished();
}

void framelessWidget::onCheckBoxStateChanged(int state)
{
    // 获取信号发送者
    QCheckBox* senderCheckBox = qobject_cast<QCheckBox*>(sender());
    if (senderCheckBox) {
        // 如果复选框被选中，则取消其他复选框的选中状态
        if (state == Qt::Checked) {
            if (senderCheckBox == ui->voice1_checkBox) {
                ui->voice2_checkBox->setChecked(false);
                ui->voice3_checkBox->setChecked(false);
                select_voice = 0;
            } else if (senderCheckBox == ui->voice2_checkBox) {
                ui->voice1_checkBox->setChecked(false);
                ui->voice3_checkBox->setChecked(false);
                select_voice = 1;
            } else if (senderCheckBox == ui->voice3_checkBox) {
                ui->voice1_checkBox->setChecked(false);
                ui->voice2_checkBox->setChecked(false);
                select_voice =2 ;
            }
        }
    }
}



void framelessWidget::on_play_pushButton_clicked()
{

    //如果播放列表为空，则不执行
    if(playList.isEmpty())
    {
        return;
    }

    //获取选中的行号
    int index = ui->listWidget->currentRow();
    current_index = index;

    QString music = playList[index].toString();

    //获取选中的音乐资源文件位置
    multimedia->playMusic(music);
    updateSongName(music);
    qDebug()<<music;

    //切换播放按钮的状态
    switch (multimedia->playState) {
    case 0:
        // 使用样式表为按钮设置背景图片
        ui->play_pushButton->setStyleSheet("image: url(:/resource/image/play.png);");
        qDebug()<<"play";
        break;
    case 1:
        ui->play_pushButton->setStyleSheet("image: url(:/resource/image/pause.png);");
        break;
        qDebug()<<"pause";

    case 2:
        ui->play_pushButton->setStyleSheet("image: url(:/resource/image/pause.png);");
        break;
        qDebug()<<"pause";
    default:
        break;
    }

}

void framelessWidget::onItemDoubleClicked()
{
    current_index = ui->listWidget->currentRow();

    QString music = playList[current_index].toString();

    multimedia->playState = 3;

    multimedia->playMusic(music);
    updateSongName(music);
}


void framelessWidget::on_next_pushButton_clicked()
{
    //如果播放列表为空，则不执行
    if(playList.isEmpty())
    {
        return;
    }
    current_index = (current_index+1)%playList.size();
    multimedia->playState = 3;
    QString music = playList[current_index].toString();
    multimedia->playMusic(music);
    updateSongName(music);
    ui->listWidget->setCurrentRow(current_index);
}


void framelessWidget::on_pre_pushButton_clicked()
{
    //如果播放列表为空，则不执行
    if(playList.isEmpty())
    {
        return;
    }

    if(current_index==0)
    {
        current_index = (playList.size()-current_index-1)%playList.size();
    }
    else
    {
        current_index = (current_index-1)%playList.size();
    }

    multimedia->playState = 3;
    QString music = playList[current_index].toString();
    multimedia->playMusic(music);
    updateSongName(music);
    ui->listWidget->setCurrentRow(current_index);
}


void framelessWidget::updateSongName(QString Musicname)
{
    // 定义正则表达式，匹配 - 和 . 之间的内容
    QRegularExpression regex("-([^.]+)\\.");

    // 在字符串中搜索匹配项
    QRegularExpressionMatch match = regex.match(Musicname);

    // 如果找到匹配项
    if (match.hasMatch()) {
        QString result = match.captured(1);
        qDebug() << "Result: " << result;
        ui->songName->setText(result);
    } else {
        qDebug() << "No match found.";
    }


}




