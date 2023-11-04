#ifndef _FRAMELESSWIDGET_H
#define _FRAMELESSWIDGET_H

#include <QMainWindow>
#include <QTimer>
#include <QMouseEvent>
#include <QGraphicsDropShadowEffect>
#include <QDebug>
#include<QUrl>
#include<QList>
#include<QtCharts/QtCharts>
#include"multimedia.h"
#include"recognizer.h"
#include"xyseriesiodevice.h"

QT_BEGIN_NAMESPACE
namespace Ui { class framelessWidget; }
QT_END_NAMESPACE

class framelessWidget : public QWidget
{
    Q_OBJECT

public:
    framelessWidget(QWidget *parent = nullptr);
    ~framelessWidget();

    void visualAudio();

private slots:


    void on_iflytek_pushButton_clicked();

    void on_song_pushButton_clicked();

    void on_dir_pushButton_clicked();

    void on_record_pushButton_pressed();

    void on_record_pushButton_released();

    void do_tts();

    void talk_to_spark();

    void onProcessFinished(const QString &input, const QString &output);

    void onCheckBoxStateChanged(int state);

    void on_play_pushButton_clicked();

    void onItemDoubleClicked();

    void on_next_pushButton_clicked();

    void on_pre_pushButton_clicked();


    void on_recommend_pushButton_clicked();

signals:
    void recognize_finished();
    void spark_finished();




private:
    Ui::framelessWidget *ui;
    int cornerRadius = 20;
    QPoint lastPos;
    QWidget *border = nullptr;
    QGraphicsDropShadowEffect *windowShadow;

    bool mousePressed = false;
    enum {AT_LEFT = 1, AT_TOP = 2,  AT_RIGHT = 4, AT_BOTTOM = 8,
          AT_TOP_LEFT = 3, AT_TOP_RIGHT = 6, AT_BOTTOM_LEFT = 9, AT_BOTTOM_RIGHT = 12};
    int mouseState;
    bool maximized = false;

    void Init();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event){
        mousePressed = false;
#if (QT_VERSION >= QT_VERSION_CHECK(6,0,0))
        if(event->globalPosition().y() < 2)
            controlWindowScale();
#else
        if(event->globalPos().y() < 2)
            controlWindowScale();
#endif
    }
    void mouseDoubleClickEvent(QMouseEvent *event)
    {
        if(event->y()<60)
            controlWindowScale();
    };
    void resizeEvent(QResizeEvent *event);

    QRect lastGeometry;
    void controlWindowScale();


private:
    Multimedia* multimedia; //创建多媒体对象
    recognizer* m_recognizer; //创建语音识别对象
    int select_voice = 0;
    int current_index = 0; //当前选中的播放列表索引，表示正在播放的歌曲的索引
    bool sliderPressed = false; // 声明一个标志，用于表示滑块是否被按下

    QList<QUrl> playList;


    //音频可视化
    XYSeriesIODevice *m_device = nullptr;
    QChart *m_chart;
    QLineSeries *m_series ;
    QAudioInput *m_audioInput = nullptr;


};
#endif // _FRAMELESSWIDGET_H
