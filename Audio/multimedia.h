#ifndef MULTIMEDIA_H
#define MULTIMEDIA_H

#include<QObject>
#include <QAudioRecorder>
#include<QMediaPlayer>
#include<QAudioOutput>
#include<QUrl>

class Multimedia : public QObject
{
    Q_OBJECT

public:
    explicit Multimedia(QObject *parent = nullptr);
    ~Multimedia();

public slots:
    void startRecord();
    void stopRecord();

    void handleError(QMediaRecorder::Error error);

    //void startPlay(const QString &filePath);
    //void stopPlay();

private:
    QAudioRecorder *m_audioRecorder; // 音频录制
    //QMediaPlayer *m_mediaPlayer; // 音频播放
    //QAudioOutput *m_audioOutput; // 音频输出
    //QIODevice *m_audioIODevice; // 音频设备



};


#endif // MULTIMEDIA_H
