#ifndef MULTIMEDIA_H
#define MULTIMEDIA_H

#include <QObject>
#include <QAudioInput>
#include <QBuffer>

class Multimedia : public QObject
{
    Q_OBJECT

public:
    explicit Multimedia(QObject *parent = nullptr);
    ~Multimedia();

public slots:
    void startRecord();
    void stopRecord();

private:
    QAudioFormat audioFormat;
    QAudioInput* audioInput;
    QBuffer* buffer;
};

#endif // MULTIMEDIA_H
