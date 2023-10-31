#include"multimedia.h"

Multimedia::Multimedia(QObject *parent) : QObject(parent)
{
    m_audioRecorder = new QAudioRecorder(this);

    // 创建QAudioRecorder对象
    m_audioRecorder = new QAudioRecorder(this);


    // 获取可用的音频输入设备列表
    QStringList audioInputs = m_audioRecorder->audioInputs();
    // 判断是否有可用的音频输入设备
    if (audioInputs.isEmpty()) {
        qDebug() << "No audio input devices available.";
        return;
    }
    // 选择第一个可用的音频输入设备（这里假设第一个设备是麦克风）
    QString defaultAudioInput = audioInputs.first();


    // 设置音频输入设备
    // 设置输出格式为WAV
    m_audioRecorder->setAudioInput(defaultAudioInput);
    m_audioRecorder->setContainerFormat("wav");


    connect(m_audioRecorder, SIGNAL(error(QMediaRecorder::Error)), this, SLOT(handleError(QMediaRecorder::Error)));

    //m_mediaPlayer = new QMediaPlayer(this);
    //m_audioOutput = new QAudioOutput(this);
}

Multimedia::~Multimedia()
{
    delete m_audioRecorder;
    //delete m_mediaPlayer;
    //delete m_audioOutput;
}

void Multimedia::startRecord()
{

    // 设置输出文件名，保存到当前文件夹下的record文件夹内
    QString outputLocation = "C:/Code/Qt/Audio/Audio/record/output.wav"; // 使用相对路径
    m_audioRecorder->setOutputLocation(QUrl::fromLocalFile(outputLocation));
    // 开始录制声音
    m_audioRecorder->record();
}

void Multimedia::stopRecord()
{
    m_audioRecorder->stop(); // 停止录制
}

void Multimedia::handleError(QMediaRecorder::Error error)
{
    qDebug() << "Error occurred: " << m_audioRecorder->errorString();
    // 进行错误处理
}

