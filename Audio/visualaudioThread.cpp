#include "visualaudioThread.h"

visualAudioThread::visualAudioThread(QObject *parent) : QThread(parent) {}

void visualAudioThread::run()
{
    const QAudioDeviceInfo inputDevice = QAudioDeviceInfo::defaultInputDevice();
    if (inputDevice.isNull()) {
        emit audioDataAvailable(QByteArray()); // 发送空数据作为错误标识
        return;
    }

    QAudioFormat formatAudio;
    formatAudio.setSampleRate(2000);
    formatAudio.setChannelCount(1);
    formatAudio.setSampleSize(8);
    formatAudio.setCodec("audio/pcm");
    formatAudio.setByteOrder(QAudioFormat::LittleEndian);
    formatAudio.setSampleType(QAudioFormat::UnSignedInt);

    QAudioInput audioInput(inputDevice, formatAudio);
    QIODevice *device = audioInput.start();

    if (device) {
        // 循环获取音频数据，并发送信号
        while (audioInput.state() == QAudio::ActiveState) {
            QByteArray audioData = device->readAll();
            emit audioDataAvailable(audioData);
            msleep(10); // 线程休眠10毫秒，控制数据获取速率
        }
        audioInput.stop();
        delete device;
    } else {
        emit audioDataAvailable(QByteArray()); // 发送空数据作为错误标识
    }
}
