/********************************************************************************
** Form generated from reading UI file 'framelessWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAMELESSWIDGET_H
#define UI_FRAMELESSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qtmaterialflatbutton.h>
#include <qtmaterialslider.h>

QT_BEGIN_NAMESPACE

class Ui_framelessWidget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QWidget *mainWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *mainLayout;
    QWidget *titleBar;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Button_min;
    QPushButton *Button_max;
    QPushButton *Button_close;
    QWidget *mainDisplayWidget;
    QWidget *main_widget;
    QStackedWidget *stackedWidget;
    QWidget *iflytekPage;
    QLabel *label;
    QtMaterialFlatButton *record_pushButton;
    QWidget *songPage;
    QLabel *label_2;
    QListWidget *listWidget;
    QWidget *left_widget;
    QPushButton *iflytek_pushButton;
    QPushButton *song_pushButton;
    QWidget *bottom_widget;
    QPushButton *dir_pushButton;
    QPushButton *play_pushButton;
    QPushButton *pre_pushButton;
    QPushButton *next_pushButton;
    QPushButton *volume_pushButton;
    QtMaterialSlider *horizontalSlider;
    QtMaterialSlider *horizontalSlider_2;
    QWidget *top_widget;
    QPushButton *user_pushButton;

    void setupUi(QWidget *framelessWidget)
    {
        if (framelessWidget->objectName().isEmpty())
            framelessWidget->setObjectName(QString::fromUtf8("framelessWidget"));
        framelessWidget->setWindowModality(Qt::WindowModal);
        framelessWidget->resize(1300, 900);
        framelessWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(framelessWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(30, 30, 30, 30);
        mainWidget = new QWidget(framelessWidget);
        mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        verticalLayout_3 = new QVBoxLayout(mainWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mainLayout = new QVBoxLayout();
        mainLayout->setSpacing(0);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        titleBar = new QWidget(mainWidget);
        titleBar->setObjectName(QString::fromUtf8("titleBar"));
        titleBar->setMinimumSize(QSize(0, 30));
        titleBar->setMaximumSize(QSize(16777215, 30));
        titleBar->setStyleSheet(QString::fromUtf8("#titleBar{\n"
"\n"
"background-color: rgb(251, 251, 251);}"));
        verticalLayout_2 = new QVBoxLayout(titleBar);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 10, 10, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Button_min = new QPushButton(titleBar);
        Button_min->setObjectName(QString::fromUtf8("Button_min"));
        Button_min->setMinimumSize(QSize(18, 18));
        Button_min->setMaximumSize(QSize(18, 18));
        Button_min->setStyleSheet(QString::fromUtf8("QPushButton{background-color:#c2c2c2;border-radius:9px}\n"
"QPushButton:hover {background-color:#f9bf45;border-radius:9px;}\n"
"QPushButton:pressed {background-color:#ffb11b;border-radius:9px;}"));

        horizontalLayout->addWidget(Button_min);

        Button_max = new QPushButton(titleBar);
        Button_max->setObjectName(QString::fromUtf8("Button_max"));
        Button_max->setMinimumSize(QSize(18, 18));
        Button_max->setMaximumSize(QSize(18, 18));
        Button_max->setStyleSheet(QString::fromUtf8("QPushButton{background-color:#c2c2c2;border-radius:9px}\n"
"QPushButton:hover {background-color:#227d51;border-radius:9px;}\n"
"QPushButton:pressed {background-color:#2d6d4b;border-radius:9px;}"));

        horizontalLayout->addWidget(Button_max);

        Button_close = new QPushButton(titleBar);
        Button_close->setObjectName(QString::fromUtf8("Button_close"));
        Button_close->setMinimumSize(QSize(18, 18));
        Button_close->setMaximumSize(QSize(18, 18));
        Button_close->setStyleSheet(QString::fromUtf8("QPushButton{background-color:#c2c2c2;border-radius:9px}\n"
"QPushButton:hover {background-color:#cb4042;border-radius:9px;}\n"
"QPushButton:pressed {background-color:#ab3b3a;border-radius:9px;}"));

        horizontalLayout->addWidget(Button_close);


        verticalLayout_2->addLayout(horizontalLayout);


        mainLayout->addWidget(titleBar);

        mainDisplayWidget = new QWidget(mainWidget);
        mainDisplayWidget->setObjectName(QString::fromUtf8("mainDisplayWidget"));
        mainDisplayWidget->setStyleSheet(QString::fromUtf8("#mainDisplayWidget{\n"
"background-color: rgb(251, 251, 251);}"));
        main_widget = new QWidget(mainDisplayWidget);
        main_widget->setObjectName(QString::fromUtf8("main_widget"));
        main_widget->setGeometry(QRect(150, 70, 1071, 621));
        main_widget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(main_widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(-50, 0, 1121, 621));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        iflytekPage = new QWidget();
        iflytekPage->setObjectName(QString::fromUtf8("iflytekPage"));
        label = new QLabel(iflytekPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 140, 54, 16));
        record_pushButton = new QtMaterialFlatButton(iflytekPage);
        record_pushButton->setObjectName(QString::fromUtf8("record_pushButton"));
        record_pushButton->setGeometry(QRect(420, 450, 100, 100));
        record_pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px; /* \345\234\206\345\275\242\346\214\211\351\222\256\357\274\214\345\215\212\345\276\204\344\270\272\346\214\211\351\222\256\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    width: 60px; /* \346\214\211\351\222\256\345\256\275\345\272\246 */\n"
"    height: 60px; /* \346\214\211\351\222\256\351\253\230\345\272\246 */\n"
"    background-color: #3498db; /* \346\214\211\351\222\256\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\345\217\257\344\273\245\346\240\271\346\215\256\351\234\200\350\246\201\344\277\256\346\224\271 */\n"
"    color: white; /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    font-size: 16px; /* \346\226\207\345\255\227\345\244\247\345\260\217 */\n"
"    border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"    box-shadow: 2px 2px 4px rgba(0, 0, 0, 0.3); /* \346\214\211\351\222\256\346\214\211\344\270\213\346\227\266\347\232\204\351\230\264\345\275\261\346\225\210\346\236\234 */\n"
"}\n"
""
                        "\n"
"QPushButton:pressed {\n"
"    box-shadow: none; /* \345\216\273\351\231\244\346\214\211\344\270\213\346\227\266\347\232\204\351\230\264\345\275\261\346\225\210\346\236\234 */\n"
"}\n"
"\n"
""));
        stackedWidget->addWidget(iflytekPage);
        songPage = new QWidget();
        songPage->setObjectName(QString::fromUtf8("songPage"));
        label_2 = new QLabel(songPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 180, 54, 16));
        listWidget = new QListWidget(songPage);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(380, 50, 281, 321));
        stackedWidget->addWidget(songPage);
        left_widget = new QWidget(mainDisplayWidget);
        left_widget->setObjectName(QString::fromUtf8("left_widget"));
        left_widget->setGeometry(QRect(0, -30, 151, 821));
        left_widget->setStyleSheet(QString::fromUtf8(""));
        iflytek_pushButton = new QPushButton(left_widget);
        iflytek_pushButton->setObjectName(QString::fromUtf8("iflytek_pushButton"));
        iflytek_pushButton->setGeometry(QRect(-1, 170, 151, 24));
        song_pushButton = new QPushButton(left_widget);
        song_pushButton->setObjectName(QString::fromUtf8("song_pushButton"));
        song_pushButton->setGeometry(QRect(-1, 280, 151, 24));
        bottom_widget = new QWidget(mainDisplayWidget);
        bottom_widget->setObjectName(QString::fromUtf8("bottom_widget"));
        bottom_widget->setGeometry(QRect(150, 690, 1071, 101));
        bottom_widget->setStyleSheet(QString::fromUtf8("*{\n"
"    border:none\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    border-color: #3498db; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #d5eaf2; /* \346\214\211\344\270\213\346\214\211\351\222\256\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\351\235\236\345\270\270\346\265\205\347\232\204\350\223\235\350\211\262 */\n"
"}"));
        dir_pushButton = new QPushButton(bottom_widget);
        dir_pushButton->setObjectName(QString::fromUtf8("dir_pushButton"));
        dir_pushButton->setGeometry(QRect(200, 30, 50, 50));
        dir_pushButton->setStyleSheet(QString::fromUtf8("image: url(:/resource/image/dir.png);"));
        play_pushButton = new QPushButton(bottom_widget);
        play_pushButton->setObjectName(QString::fromUtf8("play_pushButton"));
        play_pushButton->setGeometry(QRect(440, 30, 60, 50));
        play_pushButton->setStyleSheet(QString::fromUtf8("image: url(:/resource/image/pause.png);"));
        pre_pushButton = new QPushButton(bottom_widget);
        pre_pushButton->setObjectName(QString::fromUtf8("pre_pushButton"));
        pre_pushButton->setGeometry(QRect(330, 30, 50, 50));
        pre_pushButton->setStyleSheet(QString::fromUtf8("image: url(:/resource/image/pre.png);"));
        next_pushButton = new QPushButton(bottom_widget);
        next_pushButton->setObjectName(QString::fromUtf8("next_pushButton"));
        next_pushButton->setGeometry(QRect(550, 30, 50, 50));
        next_pushButton->setStyleSheet(QString::fromUtf8("image: url(:/resource/image/next.png);"));
        volume_pushButton = new QPushButton(bottom_widget);
        volume_pushButton->setObjectName(QString::fromUtf8("volume_pushButton"));
        volume_pushButton->setGeometry(QRect(660, 30, 50, 50));
        volume_pushButton->setStyleSheet(QString::fromUtf8("image: url(:/resource/image/next.png);\n"
"image: url(:/resource/image/volume.png);"));
        horizontalSlider = new QtMaterialSlider(bottom_widget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(0, 0, 1061, 31));
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QtMaterialSlider(bottom_widget);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(700, 50, 121, 16));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        top_widget = new QWidget(mainDisplayWidget);
        top_widget->setObjectName(QString::fromUtf8("top_widget"));
        top_widget->setGeometry(QRect(150, 0, 1071, 71));
        top_widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        user_pushButton = new QPushButton(top_widget);
        user_pushButton->setObjectName(QString::fromUtf8("user_pushButton"));
        user_pushButton->setGeometry(QRect(20, 10, 50, 50));
        user_pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	image: url(:/resource/image/user.png);\n"
"    border-radius: 25px; /* \350\256\276\347\275\256\346\214\211\351\222\256\344\270\272\345\234\206\345\275\242\357\274\214\345\215\212\345\276\204\344\270\272\346\214\211\351\222\256\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    width: 50px; /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\345\256\275\345\272\246 */\n"
"    height: 50px; /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\351\253\230\345\272\246 */\n"
"\n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"    font-size: 16px; /* \350\256\276\347\275\256\346\226\207\345\255\227\345\244\247\345\260\217 */\n"
"    border: none; /* \345\216\273\351\231\244\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d5eaf2; /* \346\214\211\344\270\213\346\214\211\351\222\256\346\227\266"
                        "\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\351\235\236\345\270\270\346\265\205\347\232\204\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3498db; /* \346\214\211\344\270\213\346\214\211\351\222\256\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\346\233\264\346\267\261\347\232\204\350\223\235\350\211\262 */\n"
"}"));

        mainLayout->addWidget(mainDisplayWidget);


        verticalLayout_3->addLayout(mainLayout);


        verticalLayout->addWidget(mainWidget);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(framelessWidget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(framelessWidget);
    } // setupUi

    void retranslateUi(QWidget *framelessWidget)
    {
        framelessWidget->setWindowTitle(QCoreApplication::translate("framelessWidget", "MainWindow", nullptr));
        Button_min->setText(QString());
        Button_max->setText(QString());
        Button_close->setText(QString());
#if QT_CONFIG(whatsthis)
        stackedWidget->setWhatsThis(QCoreApplication::translate("framelessWidget", "waht", nullptr));
#endif // QT_CONFIG(whatsthis)
        label->setText(QCoreApplication::translate("framelessWidget", "page1", nullptr));
        record_pushButton->setText(QCoreApplication::translate("framelessWidget", "\346\214\211\344\275\217\350\257\264\350\257\235", nullptr));
        label_2->setText(QCoreApplication::translate("framelessWidget", "page2", nullptr));
        iflytek_pushButton->setText(QCoreApplication::translate("framelessWidget", "\346\230\237\347\201\253", nullptr));
        song_pushButton->setText(QCoreApplication::translate("framelessWidget", "\351\237\263\344\271\220", nullptr));
        dir_pushButton->setText(QString());
        play_pushButton->setText(QString());
        pre_pushButton->setText(QString());
        next_pushButton->setText(QString());
        volume_pushButton->setText(QString());
        user_pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class framelessWidget: public Ui_framelessWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAMELESSWIDGET_H
