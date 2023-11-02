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



#include "C:/Code/Qt/Audio/Audio/iflytek_SDK/include/qisr.h" //语音识别
#include "C:/Code/Qt/Audio/Audio/iflytek_SDK/include/qtts.h" //语音合成
#include "C:/Code/Qt/Audio/Audio/iflytek_SDK/include/msp_cmn.h"
#include "C:/Code/Qt/Audio/Audio/iflytek_SDK/include/msp_errors.h"


#ifdef _WIN64
#pragma comment(lib,"C:/Code/Qt/Audio/Audio/iflytek_SDK/libs/msc_x64.lib")
#else
#pragma comment(lib, "C:/Code/Qt/Audio/Audio/iflytek_SDK/libs/msc.lib")
#endif


class recognizer : public QObject
{
    Q_OBJECT

public:
    recognizer();

    void login();

    QString runIAT(const char* audio_file);

    int tts(const char* src_text, QString des_path);

    int select = 0;//选择音色,0为女声，1为男声,2为童声

public slots:

signals:
    void recognitionResult(const QString& result);

private:


private:

};
#endif // RECOGNIZER_H
