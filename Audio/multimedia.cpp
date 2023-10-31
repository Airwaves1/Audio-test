#include "multimedia.h"
#include <QIODevice>
#include <QAudioFormat>
#include <QFile>
#include <QDebug>

Multimedia::Multimedia(QObject *parent) : QObject(parent)
{
    audioFormat.setSampleRate(16000); // Sample rate: 16k
    audioFormat.setSampleSize(16);    // Sample size: 16-bit
    audioFormat.setChannelCount(1);   // Channels: 1 for mono
    audioFormat.setCodec("audio/pcm");
    audioFormat.setByteOrder(QAudioFormat::LittleEndian);
    audioFormat.setSampleType(QAudioFormat::SignedInt);

    audioInput = new QAudioInput(audioFormat, this);
    buffer = new QBuffer(this);
    buffer->setData(QByteArray());


    //audioOutput = new QAudioOutput();
    player = new QMediaPlayer();
    player->setMedia(QUrl::fromLocalFile("C:/Users/ly134/Music/ikun.mp3")); // 替换为你的歌曲文件路径

    player->setVolume(100); // 设置音量（0-100之间）
    //player->play(); // 播放音乐
}

Multimedia::~Multimedia()
{
    delete buffer;
    delete audioInput;
}

void Multimedia::startRecord()
{
    buffer->open(QIODevice::ReadWrite);
    audioInput->start(buffer);
    qDebug() << "Recording started...";
}

void Multimedia::stopRecord()
{
    audioInput->stop();
    buffer->close();

    // Save recorded audio to a WAV file
    QString filePath = "C:/Code/Qt/Audio/Audio/record/output.wav"; // 指定保存的文件路径
    QFile file(filePath);
    if (file.open(QIODevice::WriteOnly)) {
        QByteArray header;
        qint64 dataSize = buffer->size();
        header.append("RIFF");
        header.append(QByteArray::number(dataSize + 36, 4));
        header.append("WAVE");
        header.append("fmt ");
        header.append(QByteArray::number(16, 4));
        header.append(QByteArray::number(1, 2));
        header.append(QByteArray::number(16000, 4));
        header.append(QByteArray::number(32000, 4));
        header.append(QByteArray::number(2, 2));
        header.append(QByteArray::number(16, 2));
        header.append("data");
        header.append(QByteArray::number(dataSize, 4));
        file.write(header);
        file.write(buffer->data());
        file.close();
        qDebug() << "Recording saved as: " << filePath;
    } else {
        qDebug() << "Failed to save recording!";
    }

    buffer->setData(QByteArray()); // 清空缓冲区
}

void Multimedia::play(const QString& m_file)
{
    QString filePath = m_file; // 指定播放的文件路径
    QFile file(filePath);
    if (file.open(QIODevice::ReadOnly)) {
        QByteArray header = file.read(44);
        QByteArray data = file.readAll();
        file.close();

        QAudioFormat format;
        format.setSampleRate(16000);
        format.setSampleSize(16);
        format.setChannelCount(1);
        format.setCodec("audio/pcm");
        format.setByteOrder(QAudioFormat::LittleEndian);
        format.setSampleType(QAudioFormat::SignedInt);

        QAudioOutput* audioOutput = new QAudioOutput(format, this);
        QBuffer* buffer = new QBuffer(this);
        buffer->setData(data);
        buffer->open(QIODevice::ReadOnly);
        audioOutput->start(buffer);
    } else {
        qDebug() << "Failed to open audio file!";
    }
}
