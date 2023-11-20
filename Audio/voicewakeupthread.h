#ifndef VOICEWAKEUPTHREAD_H
#define VOICEWAKEUPTHREAD_H

#include <QThread>
#include <QAudioInput>

class VoiceWakeupThread : public QThread
{
    Q_OBJECT

public:
    VoiceWakeupThread(QObject *parent = nullptr);
    ~VoiceWakeupThread();

signals:
    void wakeupDetected(const QString &result);

protected:
    void run() override;

private:
    void sleepMs(int ms);
    static void showResult(const char *string, char isOver);
    static int cbIvwMsgProc(const char *sessionID, int msg, int param1, int param2, const void *info, void *userData);
    void ivwDemoMicrophone(const char *grammarList, const char *sessionBeginParams);

private:
    int wakeupFlag;
    QAudioInput *audioInput;
};

#endif // VOICEWAKEUPTHREAD_H
