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
