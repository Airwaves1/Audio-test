#ifndef WAKEUP_H
#define WAKEUP_H

#include <QObject>
#include "stdlib.h"
#include "stdio.h"
#include <windows.h>
#include <conio.h>
#include <errno.h>
#include <WinDef.h>


#include "C:/Code/Qt/Audio/Audio/wakeup_SDK/include/qivw.h"   //语音唤醒
#include "C:/Code/Qt/Audio/Audio/wakeup_SDK/include/msp_cmn.h"
#include "C:/Code/Qt/Audio/Audio/wakeup_SDK/include/msp_errors.h"

#pragma comment(lib, "winmm.lib")

#ifdef _WIN64
#pragma comment(lib,"../../libs/msc_x64.lib")
#else
#pragma comment(lib, "../../libs/msc.lib")
#endif



class wakeup : public QObject
{
    Q_OBJECT
public:
    explicit wakeup(QObject *parent = nullptr);

signals:
    void wakeup_finished();
};

#endif // WAKEUP_H
