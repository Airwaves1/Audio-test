#pragma once

#include <QThread>
#include <QAudioInput>
#include <QAudioFormat>
#include <QByteArray>

class visualAudioThread : public QThread
{
    Q_OBJECT
public:
    explicit visualAudioThread(QObject *parent = nullptr);
    void run() override;

signals:
    void audioDataAvailable(const QByteArray &data);
};
