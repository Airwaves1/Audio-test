#ifndef RECOGNIZER_H
#define RECOGNIZER_H
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <errno.h>
#include <windows.h>

#include <QObject>
#include <QString>
#include <QFile>
#include <QTextStream>



#include "qisr.h" //语音识别
#include "qtts.h" //语音合成
#include "msp_cmn.h"
#include "msp_errors.h"

#ifdef _WIN64
#pragma comment(lib,"C:/Code/Qt/stu/voice_2/libs/msc_x64.lib")
#else
#pragma comment(lib, "C:/Code/Qt/stu/voice_2/libs/msc.lib")
#endif


class recognizer : public QObject
{
    Q_OBJECT

public:
    recognizer();
    ~recognizer();

    void login();

    QString runIAT(const char* audio_file);

    int tts(const char* src_text, QString des_path);

public slots:

signals:
    void recognitionResult(const QString& result);

private:


private:

};
#endif // RECOGNIZER_H
