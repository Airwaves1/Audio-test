#ifndef MULTIMEDIA_H
#define MULTIMEDIA_H

#include <QObject>
#include <QAudioInput>
#include <QBuffer>
#include<QAudioOutput>
#include<QMediaPlayer>


class Multimedia : public QObject
{
    Q_OBJECT

public:
    explicit Multimedia(QObject *parent = nullptr);
    ~Multimedia();

public slots:
    void startRecord();
    void stopRecord();

    void play(const QString& file);

private:
    QAudioFormat audioFormat;
    QAudioInput* audioInput;
    QBuffer* buffer;

    //QAudioOutput* audioOutput;
    QMediaPlayer* player;

};

#endif // MULTIMEDIA_H
