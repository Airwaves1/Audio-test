QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QT += multimedia


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
# 加载动态库
LIBS += -L$$PWD/iflytek_SDK/bin -lmsc_x64


INCLUDEPATH +=$$PWD/iflytek_SDK/include


SOURCES += \
    framelessWidget.cpp \
    main.cpp \
    multimedia.cpp \
    recognizer.cpp \
    widget.cpp

HEADERS += \
    colorchangingtextedit.h \
    framelessWidget.h \
    iflytek.h \
    multimedia.h \
    recognizer.h \
    widget.h

FORMS += \
    framelessWidget.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

