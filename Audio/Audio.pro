QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QT += multimedia
QT += charts

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


# material SDK

LIBS += $$PWD/libs/libcomponents.a
INCLUDEPATH +=$$PWD/libs/include


# iflytek SDK
LIBS += $$PWD/iflytek_SDK/libs/msc.lib
LIBS += $$PWD/iflytek_SDK/libs/msc_x64.lib

# 加载语音识别和语音合成动态库
LIBS += -L$$PWD/iflytek_SDK/bin -lmsc_x64
INCLUDEPATH +=$$PWD/iflytek_SDK/include

#加载语音唤醒的静态库
LIBS += $$PWD/wakeup_SDK/libs/msc.lib
LIBS += $$PWD/wakeup_SDK/libs/msc_x64.lib

#加载语音唤醒的动态库
LIBS += -L$$PWD/wakeup_SDK/bin -lmsc_x64
INCLUDEPATH +=$$PWD/wakeup_SDK/include


#加载傅里叶变换的静态库
LIBS += $$PWD/fftw3/libs/libfftw3-3.lib
INCLUDEPATH += $$PWD/fftw3/libs/include



SOURCES += \
    framelessWidget.cpp \
    main.cpp \
    multimedia.cpp \
    recognizer.cpp \
    wakeup.cpp \
    widget.cpp \
    xyseriesiodevice.cpp

HEADERS += \
    colorchangingtextedit.h \
    framelessWidget.h \
    iflytek.h \
    multimedia.h \
    recognizer.h \
    wakeup.h \
    widget.h \
    xyseriesiodevice.h

FORMS += \
    framelessWidget.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

