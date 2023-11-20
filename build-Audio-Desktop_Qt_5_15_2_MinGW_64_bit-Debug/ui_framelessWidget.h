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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <colorchangingtextedit.h>
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
    QtMaterialFlatButton *record_pushButton;
    ColorChangingTextEdit *iat_result;
    QTextEdit *iflytek;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *voice1_checkBox;
    QCheckBox *voice2_checkBox;
    QCheckBox *voice3_checkBox;
    QLabel *paimeng_3;
    QLabel *paimeng_1;
    QLabel *paimeng_5;
    QLabel *paimeng_4;
    QLabel *paimeng_2;
    QWidget *page;
    QLabel *label_8;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_12;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QWidget *songPage;
    QListWidget *listWidget;
    QWidget *visualAudio_widget;
    QWidget *left_widget;
    QPushButton *iflytek_pushButton;
    QPushButton *song_pushButton;
    QPushButton *recommend_pushButton;
    QLabel *label_3;
    QLabel *label_5;
    QWidget *bottom_widget;
    QPushButton *play_pushButton;
    QPushButton *pre_pushButton;
    QPushButton *next_pushButton;
    QPushButton *volume_pushButton;
    QtMaterialSlider *playerSlider;
    QtMaterialSlider *volumeSlider;
    QWidget *widget;
    QLabel *current_label;
    QLabel *total_label;
    QLabel *label_4;
    QLabel *image_label;
    QLineEdit *songName;
    QPushButton *dir_pushButton;
    QLabel *label_6;
    QWidget *top_widget;
    QPushButton *user_pushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;

    void setupUi(QWidget *framelessWidget)
    {
        if (framelessWidget->objectName().isEmpty())
            framelessWidget->setObjectName(QString::fromUtf8("framelessWidget"));
        framelessWidget->setWindowModality(Qt::WindowModal);
        framelessWidget->resize(1300, 900);
        framelessWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 255, 254);"));
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
        mainWidget->setStyleSheet(QString::fromUtf8(""));
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
        stackedWidget->setGeometry(QRect(-50, 0, 1121, 551));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget->setFrameShadow(QFrame::Plain);
        iflytekPage = new QWidget();
        iflytekPage->setObjectName(QString::fromUtf8("iflytekPage"));
        record_pushButton = new QtMaterialFlatButton(iflytekPage);
        record_pushButton->setObjectName(QString::fromUtf8("record_pushButton"));
        record_pushButton->setGeometry(QRect(480, 440, 100, 100));
        QFont font;
        font.setBold(true);
        record_pushButton->setFont(font);
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
        iat_result = new ColorChangingTextEdit(iflytekPage);
        iat_result->setObjectName(QString::fromUtf8("iat_result"));
        iat_result->setGeometry(QRect(250, 350, 581, 81));
        iflytek = new QTextEdit(iflytekPage);
        iflytek->setObjectName(QString::fromUtf8("iflytek"));
        iflytek->setGeometry(QRect(250, 19, 581, 251));
        iflytek->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"	background-color: rgb(255, 255, 255);\n"
"    border: 2px solid #4CAF50; /* \350\276\271\346\241\206 */\n"
"    padding: 10px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    color: #333; /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    font-family: Arial, sans-serif; /* \345\255\227\344\275\223 */\n"
"    font-size: 14px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    border-radius: 5px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QTextEdit:focus {\n"
"    border: 2px solid #2196F3; /* \350\216\267\345\217\226\347\204\246\347\202\271\346\227\266\347\232\204\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QTextEdit::placeholder {\n"
"    color: #999; /* \345\215\240\344\275\215\347\254\246\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"    width: 10px; /* \347\253\226\347\233\264\346\273\232\345\212\250\346\235\241\345\256\275\345\272\246 */\n"
"}\n"
"\n"
"QScrollBar::handl"
                        "e:vertical {\n"
"    background-color: #4CAF50; /* \346\273\232\345\212\250\346\235\241\346\214\211\351\222\256\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical,\n"
"QScrollBar::sub-line:vertical,\n"
"QScrollBar::add-page:vertical,\n"
"QScrollBar::sub-page:vertical {\n"
"    background: none; /* \346\273\232\345\212\250\346\235\241\347\256\255\345\244\264\345\222\214\346\273\232\345\212\250\346\235\241\350\203\214\346\231\257\346\240\267\345\274\217 */\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    height: 10px; /* \346\260\264\345\271\263\346\273\232\345\212\250\346\235\241\351\253\230\345\272\246 */\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background-color: #4CAF50; /* \346\260\264\345\271\263\346\273\232\345\212\250\346\235\241\346\214\211\351\222\256\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    border-radius: 5px; /* \346\214\211\351\222\256\345\234\206"
                        "\350\247\222 */\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal,\n"
"QScrollBar::sub-line:horizontal,\n"
"QScrollBar::add-page:horizontal,\n"
"QScrollBar::sub-page:horizontal {\n"
"    background: none; /* \346\273\232\345\212\250\346\235\241\347\256\255\345\244\264\345\222\214\346\273\232\345\212\250\346\235\241\350\203\214\346\231\257\346\240\267\345\274\217 */\n"
"}\n"
""));
        verticalLayoutWidget = new QWidget(iflytekPage);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(890, 82, 170, 171));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        voice1_checkBox = new QCheckBox(verticalLayoutWidget);
        voice1_checkBox->setObjectName(QString::fromUtf8("voice1_checkBox"));
        voice1_checkBox->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    background-color: transparent;\n"
"    color: #333333;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}"));

        verticalLayout_4->addWidget(voice1_checkBox);

        voice2_checkBox = new QCheckBox(verticalLayoutWidget);
        voice2_checkBox->setObjectName(QString::fromUtf8("voice2_checkBox"));
        voice2_checkBox->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    background-color: transparent;\n"
"    color: #333333;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}"));

        verticalLayout_4->addWidget(voice2_checkBox);

        voice3_checkBox = new QCheckBox(verticalLayoutWidget);
        voice3_checkBox->setObjectName(QString::fromUtf8("voice3_checkBox"));
        voice3_checkBox->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    background-color: transparent;\n"
"    color: #333333;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}"));

        verticalLayout_4->addWidget(voice3_checkBox);

        paimeng_3 = new QLabel(iflytekPage);
        paimeng_3->setObjectName(QString::fromUtf8("paimeng_3"));
        paimeng_3->setGeometry(QRect(470, 135, 151, 131));
        paimeng_3->setStyleSheet(QString::fromUtf8(""));
        paimeng_3->setPixmap(QPixmap(QString::fromUtf8(":/resource/paimeng/6.png")));
        paimeng_3->setScaledContents(true);
        paimeng_1 = new QLabel(iflytekPage);
        paimeng_1->setObjectName(QString::fromUtf8("paimeng_1"));
        paimeng_1->setGeometry(QRect(130, 20, 121, 111));
        paimeng_1->setPixmap(QPixmap(QString::fromUtf8(":/resource/paimeng/1.png")));
        paimeng_1->setScaledContents(true);
        paimeng_5 = new QLabel(iflytekPage);
        paimeng_5->setObjectName(QString::fromUtf8("paimeng_5"));
        paimeng_5->setGeometry(QRect(110, 140, 141, 111));
        paimeng_5->setPixmap(QPixmap(QString::fromUtf8(":/resource/paimeng/5.png")));
        paimeng_5->setScaledContents(true);
        paimeng_4 = new QLabel(iflytekPage);
        paimeng_4->setObjectName(QString::fromUtf8("paimeng_4"));
        paimeng_4->setGeometry(QRect(667, 166, 161, 101));
        paimeng_4->setPixmap(QPixmap(QString::fromUtf8(":/resource/paimeng/4.png")));
        paimeng_4->setScaledContents(true);
        paimeng_2 = new QLabel(iflytekPage);
        paimeng_2->setObjectName(QString::fromUtf8("paimeng_2"));
        paimeng_2->setGeometry(QRect(380, 115, 151, 151));
        paimeng_2->setPixmap(QPixmap(QString::fromUtf8(":/resource/paimeng/7.png")));
        paimeng_2->setScaledContents(true);
        stackedWidget->addWidget(iflytekPage);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_8 = new QLabel(page);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(290, 40, 54, 16));
        scrollArea = new QScrollArea(page);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(50, 0, 1071, 521));
        scrollArea->setMinimumSize(QSize(0, 300));
        scrollArea->setMaximumSize(QSize(16777215, 999));
        scrollArea->setAutoFillBackground(false);
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea {\n"
"    background-color: #ffffff; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    border: 1px solid #cccccc; /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"    border: 1px solid #cccccc; /* \345\236\202\347\233\264\346\273\232\345\212\250\346\235\241\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    background: #f0f0f0; /* \345\236\202\347\233\264\346\273\232\345\212\250\346\235\241\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    width: 10px; /* \345\236\202\347\233\264\346\273\232\345\212\250\346\235\241\345\256\275\345\272\246 */\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: #666666; /* \345\236\202\347\233\264\346\273\232\345\212\250\346\235\241\346\273\221\345\235\227\351\242\234\350\211\262 */\n"
"    border-radius: 5px; /* \346\273\221\345\235\227\345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"}\n"
""
                        "\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {\n"
"    border: none;\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"    background: none;\n"
"}\n"
""));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1059, 1200));
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 1200));
        scrollAreaWidgetContents->setMaximumSize(QSize(16777215, 1200));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8(""));
        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(50, 410, 221, 221));
        label_12->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: lightblue;\n"
"    border-radius: 3px;\n"
"    padding: 3px;\n"
"	\n"
"	background-image: url(:/resource/image2/6.png);\n"
"\n"
"    background-size: contain; /* \346\210\226\350\200\205\344\275\277\347\224\250 contain\357\274\214\346\240\271\346\215\256\351\234\200\346\261\202\351\200\211\346\213\251 */\n"
"    background-repeat: no-repeat;\n"
"}\n"
"QLabel:hover {\n"
"	background-image: none; /* \350\256\276\347\275\256\344\270\272 none\357\274\214\350\241\250\347\244\272\351\232\220\350\227\217\350\203\214\346\231\257\345\233\276\345\203\217 */\n"
"	background-image: url(:/resource/image2/6-1.png);\n"
"}"));
        label_12->setScaledContents(true);
        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 120, 471, 221));
        label_10->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: lightblue;\n"
"    border-radius: 3px;\n"
"    padding: 3px;\n"
"	\n"
"	background-image: url(:/resource/image2/3.png);\n"
"\n"
"    background-size: contain; /* \346\210\226\350\200\205\344\275\277\347\224\250 contain\357\274\214\346\240\271\346\215\256\351\234\200\346\261\202\351\200\211\346\213\251 */\n"
"    background-repeat: no-repeat;\n"
"}\n"
"QLabel:hover {\n"
"	background-image: none; /* \350\256\276\347\275\256\344\270\272 none\357\274\214\350\241\250\347\244\272\351\232\220\350\227\217\350\203\214\346\231\257\345\233\276\345\203\217 */\n"
"	background-image: url(:/resource/image2/3-1.png);\n"
"}"));
        label_10->setScaledContents(true);
        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(550, 120, 211, 211));
        label_11->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: lightblue;\n"
"    border-radius: 3px;\n"
"    padding: 3px;\n"
"	\n"
"	background-image: url(:/resource/image2/5.png);\n"
"\n"
"    background-size: contain; /* \346\210\226\350\200\205\344\275\277\347\224\250 contain\357\274\214\346\240\271\346\215\256\351\234\200\346\261\202\351\200\211\346\213\251 */\n"
"    background-repeat: no-repeat;\n"
"}\n"
"QLabel:hover {\n"
"	background-image: none; /* \350\256\276\347\275\256\344\270\272 none\357\274\214\350\241\250\347\244\272\351\232\220\350\227\217\350\203\214\346\231\257\345\233\276\345\203\217 */\n"
"	background-image: url(:/resource/image2/5-1.png);\n"
"}"));
        label_11->setScaledContents(true);
        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(810, 120, 211, 211));
        label_13->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: lightblue;\n"
"    border-radius: 3px;\n"
"    padding: 3px;\n"
"	\n"
"	background-image: url(:/resource/image2/8.png);\n"
"\n"
"    background-size: contain; /* \346\210\226\350\200\205\344\275\277\347\224\250 contain\357\274\214\346\240\271\346\215\256\351\234\200\346\261\202\351\200\211\346\213\251 */\n"
"    background-repeat: no-repeat;\n"
"}\n"
"QLabel:hover {\n"
"	background-image: none; /* \350\256\276\347\275\256\344\270\272 none\357\274\214\350\241\250\347\244\272\351\232\220\350\227\217\350\203\214\346\231\257\345\233\276\345\203\217 */\n"
"	background-image: url(:/resource/image2/8-1.png);\n"
"}"));
        label_13->setScaledContents(true);
        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 0, 121, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(22);
        font1.setBold(true);
        label_7->setFont(font1);
        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 60, 341, 41));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label_9->setFont(font2);
        label_9->setTextFormat(Qt::RichText);
        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(300, 410, 221, 221));
        label_14->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: lightblue;\n"
"    border-radius: 3px;\n"
"    padding: 3px;\n"
"	\n"
"	background-image: url(:/resource/image2/9.png);\n"
"\n"
"    background-size: contain; /* \346\210\226\350\200\205\344\275\277\347\224\250 contain\357\274\214\346\240\271\346\215\256\351\234\200\346\261\202\351\200\211\346\213\251 */\n"
"    background-repeat: no-repeat;\n"
"}\n"
"QLabel:hover {\n"
"	background-image: none; /* \350\256\276\347\275\256\344\270\272 none\357\274\214\350\241\250\347\244\272\351\232\220\350\227\217\350\203\214\346\231\257\345\233\276\345\203\217 */\n"
"	background-image: url(:/resource/image2/9-1.png);\n"
"}"));
        label_14->setScaledContents(true);
        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(550, 410, 221, 221));
        label_15->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: lightblue;\n"
"    border-radius: 3px;\n"
"    padding: 3px;\n"
"	\n"
"	background-image: url(:/resource/image2/12.png);\n"
"\n"
"    background-size: contain; /* \346\210\226\350\200\205\344\275\277\347\224\250 contain\357\274\214\346\240\271\346\215\256\351\234\200\346\261\202\351\200\211\346\213\251 */\n"
"    background-repeat: no-repeat;\n"
"}\n"
"QLabel:hover {\n"
"	background-image: none; /* \350\256\276\347\275\256\344\270\272 none\357\274\214\350\241\250\347\244\272\351\232\220\350\227\217\350\203\214\346\231\257\345\233\276\345\203\217 */\n"
"	background-image: url(:/resource/image2/12-1.png);\n"
"}"));
        label_15->setScaledContents(true);
        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(794, 410, 221, 221));
        label_16->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: lightblue;\n"
"    border-radius: 3px;\n"
"    padding: 3px;\n"
"	\n"
"	background-image: url(:/resource/image2/13.png);\n"
"    background-size: contain; /* \346\210\226\350\200\205\344\275\277\347\224\250 contain\357\274\214\346\240\271\346\215\256\351\234\200\346\261\202\351\200\211\346\213\251 */\n"
"    background-repeat: no-repeat;\n"
"}\n"
"QLabel:hover {\n"
"	background-image: none; /* \350\256\276\347\275\256\344\270\272 none\357\274\214\350\241\250\347\244\272\351\232\220\350\227\217\350\203\214\346\231\257\345\233\276\345\203\217 */\n"
"	background-image: url(:/resource/image2/13-1.png);\n"
"}"));
        label_16->setScaledContents(true);
        label_17 = new QLabel(scrollAreaWidgetContents);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(50, 700, 221, 231));
        label_17->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: lightblue;\n"
"    border-radius: 3px;\n"
"    padding: 3px;\n"
"	\n"
"\n"
"	background-image: url(:/resource/image2/11.png);\n"
"    background-size: contain; /* \346\210\226\350\200\205\344\275\277\347\224\250 contain\357\274\214\346\240\271\346\215\256\351\234\200\346\261\202\351\200\211\346\213\251 */\n"
"    background-repeat: no-repeat;\n"
"}\n"
"QLabel:hover {\n"
"	background-image: none; /* \350\256\276\347\275\256\344\270\272 none\357\274\214\350\241\250\347\244\272\351\232\220\350\227\217\350\203\214\346\231\257\345\233\276\345\203\217 */\n"
"	background-image: url(:/resource/image2/11-1.png);\n"
"}"));
        label_17->setScaledContents(true);
        label_18 = new QLabel(scrollAreaWidgetContents);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(300, 700, 221, 231));
        label_18->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-image: url(:/resource/image2/14.png);\n"
"    background-color: lightblue;\n"
"    border-radius: 3px;\n"
"    padding: 3px;\n"
"	\n"
"\n"
"    background-size: contain; /* \346\210\226\350\200\205\344\275\277\347\224\250 contain\357\274\214\346\240\271\346\215\256\351\234\200\346\261\202\351\200\211\346\213\251 */\n"
"    background-repeat: no-repeat;\n"
"}\n"
"QLabel:hover {\n"
"	background-image: none; /* \350\256\276\347\275\256\344\270\272 none\357\274\214\350\241\250\347\244\272\351\232\220\350\227\217\350\203\214\346\231\257\345\233\276\345\203\217 */\n"
"	background-image: url(:/resource/image2/14-1.png);\n"
"}"));
        label_18->setScaledContents(true);
        label_19 = new QLabel(scrollAreaWidgetContents);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(552, 700, 221, 231));
        label_19->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: lightblue;\n"
"    border-radius: 3px;\n"
"    padding: 3px;\n"
"	background-image: url(:/resource/image2/10.png);\n"
"\n"
"    background-size: contain; /* \346\210\226\350\200\205\344\275\277\347\224\250 contain\357\274\214\346\240\271\346\215\256\351\234\200\346\261\202\351\200\211\346\213\251 */\n"
"    background-repeat: no-repeat;\n"
"}\n"
"QLabel:hover {\n"
"	background-image: none; /* \350\256\276\347\275\256\344\270\272 none\357\274\214\350\241\250\347\244\272\351\232\220\350\227\217\350\203\214\346\231\257\345\233\276\345\203\217 */\n"
"	background-image: url(:/resource/image2/10-1.png);\n"
"}"));
        label_19->setScaledContents(true);
        label_20 = new QLabel(scrollAreaWidgetContents);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(797, 702, 221, 231));
        label_20->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: lightblue;\n"
"    border-radius: 3px;\n"
"    padding: 3px;\n"
"	\n"
"	background-image: url(:/resource/image2/15.png);\n"
"\n"
"    background-size: contain; /* \346\210\226\350\200\205\344\275\277\347\224\250 contain\357\274\214\346\240\271\346\215\256\351\234\200\346\261\202\351\200\211\346\213\251 */\n"
"    background-repeat: no-repeat;\n"
"}\n"
"QLabel:hover {\n"
"	background-image: none; /* \350\256\276\347\275\256\344\270\272 none\357\274\214\350\241\250\347\244\272\351\232\220\350\227\217\350\203\214\346\231\257\345\233\276\345\203\217 */\n"
"	background-image: url(:/resource/image2/15-1.png);\n"
"}"));
        label_20->setScaledContents(true);
        label_21 = new QLabel(scrollAreaWidgetContents);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(60, 360, 71, 16));
        QFont font3;
        font3.setPointSize(11);
        label_21->setFont(font3);
        label_22 = new QLabel(scrollAreaWidgetContents);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(570, 360, 71, 16));
        label_22->setFont(font3);
        label_23 = new QLabel(scrollAreaWidgetContents);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(820, 360, 71, 16));
        label_23->setFont(font3);
        label_24 = new QLabel(scrollAreaWidgetContents);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(60, 640, 211, 31));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        label_24->setFont(font4);
        label_24->setTextFormat(Qt::RichText);
        label_25 = new QLabel(scrollAreaWidgetContents);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(350, 650, 131, 16));
        label_25->setFont(font4);
        label_25->setTextFormat(Qt::RichText);
        label_26 = new QLabel(scrollAreaWidgetContents);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(610, 650, 91, 16));
        label_26->setFont(font4);
        label_26->setTextFormat(Qt::RichText);
        label_27 = new QLabel(scrollAreaWidgetContents);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(840, 650, 141, 21));
        label_27->setFont(font4);
        label_27->setTextFormat(Qt::RichText);
        label_28 = new QLabel(scrollAreaWidgetContents);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(90, 940, 211, 31));
        label_28->setFont(font4);
        label_28->setTextFormat(Qt::RichText);
        label_29 = new QLabel(scrollAreaWidgetContents);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(370, 940, 211, 31));
        label_29->setFont(font4);
        label_29->setTextFormat(Qt::RichText);
        label_30 = new QLabel(scrollAreaWidgetContents);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(620, 940, 211, 31));
        label_30->setFont(font4);
        label_30->setTextFormat(Qt::RichText);
        label_31 = new QLabel(scrollAreaWidgetContents);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(880, 940, 211, 31));
        label_31->setFont(font4);
        label_31->setTextFormat(Qt::RichText);
        scrollArea->setWidget(scrollAreaWidgetContents);
        stackedWidget->addWidget(page);
        songPage = new QWidget();
        songPage->setObjectName(QString::fromUtf8("songPage"));
        listWidget = new QListWidget(songPage);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(80, -8, 1041, 521));
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"    background-color: #ffffff; /* \345\210\227\350\241\250\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    border: 1px solid #cccccc; /* \345\210\227\350\241\250\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 8px; /* \345\210\227\350\241\250\345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"}\n"
"\n"
"QListWidget::item {\n"
"    padding: 8px; /* \346\257\217\344\270\252\351\241\271\347\232\204\345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QListWidget::item:selected {\n"
"	\n"
"	background-color: rgb(238, 255, 253\357\274\2140.8);\n"
"    color: rgba(255, 255, 255); /* \351\200\211\344\270\255\351\241\271\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262\357\274\214\345\205\266\344\270\2550.8\346\230\257\351\200\217\346\230\216\345\272\246 */\n"
"}\n"
"font: 12pt \"Sitka Text\";"));
        listWidget->setFrameShape(QFrame::NoFrame);
        listWidget->setFrameShadow(QFrame::Plain);
        stackedWidget->addWidget(songPage);
        visualAudio_widget = new QWidget(main_widget);
        visualAudio_widget->setObjectName(QString::fromUtf8("visualAudio_widget"));
        visualAudio_widget->setGeometry(QRect(0, 520, 1071, 111));
        left_widget = new QWidget(mainDisplayWidget);
        left_widget->setObjectName(QString::fromUtf8("left_widget"));
        left_widget->setGeometry(QRect(0, -30, 151, 821));
        left_widget->setStyleSheet(QString::fromUtf8("background-color: rgb(231, 255, 255);"));
        iflytek_pushButton = new QPushButton(left_widget);
        iflytek_pushButton->setObjectName(QString::fromUtf8("iflytek_pushButton"));
        iflytek_pushButton->setGeometry(QRect(10, 180, 131, 40));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Lucida Console"));
        iflytek_pushButton->setFont(font5);
        iflytek_pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db; /* \346\265\205\350\223\235\350\211\262\350\203\214\346\231\257 */\n"
"    color: white; /* \347\231\275\350\211\262\346\226\207\345\255\227 */\n"
"    border: 1px solid #3498db; /* \346\265\205\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"    padding: 5px 10px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 14px; /* \346\226\207\345\255\227\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #21618c; /* \351\274\240\346\240\207\346\214\211\344\270\213\346\227\266\347\232\204\351\242\234\350\211\262 */\n"
"}\n"
""));
        song_pushButton = new QPushButton(left_widget);
        song_pushButton->setObjectName(QString::fromUtf8("song_pushButton"));
        song_pushButton->setGeometry(QRect(10, 376, 131, 40));
        song_pushButton->setFont(font5);
        song_pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50; /* \350\256\276\347\275\256\346\214\211\351\222\256\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: white; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    border: 1px solid #4CAF50; /* \350\256\276\347\275\256\346\214\211\351\222\256\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \350\256\276\347\275\256\346\214\211\351\222\256\345\234\206\350\247\222 */\n"
"    padding: 5px 10px; /* \350\256\276\347\275\256\346\214\211\351\222\256\345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 14px; /* \350\256\276\347\275\256\346\226\207\345\255\227\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41; /* \351\274\240\346\240\207\346\214\211\344\270\213\346\227\266"
                        "\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
""));
        recommend_pushButton = new QPushButton(left_widget);
        recommend_pushButton->setObjectName(QString::fromUtf8("recommend_pushButton"));
        recommend_pushButton->setGeometry(QRect(10, 277, 131, 40));
        recommend_pushButton->setFont(font5);
        recommend_pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #e67e22; /* \346\251\230\350\211\262\350\203\214\346\231\257 */\n"
"    color: white; /* \347\231\275\350\211\262\346\226\207\345\255\227 */\n"
"    border: 1px solid #e67e22; /* \346\251\230\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 5px; /* \345\234\206\350\247\222 */\n"
"    padding: 5px 10px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 14px; /* \346\226\207\345\255\227\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d35400; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #a04000; /* \351\274\240\346\240\207\346\214\211\344\270\213\346\227\266\347\232\204\351\242\234\350\211\262 */\n"
"}\n"
""));
        label_3 = new QLabel(left_widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 40, 71, 61));
        label_3->setStyleSheet(QString::fromUtf8("QLabel:hover {\n"
"    background-color: #d5eaf2; /* \346\214\211\344\270\213\346\214\211\351\222\256\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\351\235\236\345\270\270\346\265\205\347\232\204\350\223\235\350\211\262 */\n"
"}"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/resource/image2/twitch.png")));
        label_3->setScaledContents(true);
        label_5 = new QLabel(left_widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 110, 101, 41));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2c3e50; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    font-size: 19px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
""));
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
        play_pushButton = new QPushButton(bottom_widget);
        play_pushButton->setObjectName(QString::fromUtf8("play_pushButton"));
        play_pushButton->setGeometry(QRect(510, 30, 60, 50));
        play_pushButton->setStyleSheet(QString::fromUtf8(""));
        pre_pushButton = new QPushButton(bottom_widget);
        pre_pushButton->setObjectName(QString::fromUtf8("pre_pushButton"));
        pre_pushButton->setGeometry(QRect(420, 30, 50, 50));
        pre_pushButton->setStyleSheet(QString::fromUtf8("image: url(:/resource/image/pre.png);"));
        next_pushButton = new QPushButton(bottom_widget);
        next_pushButton->setObjectName(QString::fromUtf8("next_pushButton"));
        next_pushButton->setGeometry(QRect(600, 30, 50, 50));
        next_pushButton->setStyleSheet(QString::fromUtf8("image: url(:/resource/image/next.png);"));
        volume_pushButton = new QPushButton(bottom_widget);
        volume_pushButton->setObjectName(QString::fromUtf8("volume_pushButton"));
        volume_pushButton->setGeometry(QRect(730, 38, 35, 35));
        volume_pushButton->setStyleSheet(QString::fromUtf8("image: url(:/resource/image/next.png);\n"
"image: url(:/resource/image/volume.png);"));
        playerSlider = new QtMaterialSlider(bottom_widget);
        playerSlider->setObjectName(QString::fromUtf8("playerSlider"));
        playerSlider->setGeometry(QRect(0, 0, 1061, 31));
        playerSlider->setOrientation(Qt::Horizontal);
        volumeSlider = new QtMaterialSlider(bottom_widget);
        volumeSlider->setObjectName(QString::fromUtf8("volumeSlider"));
        volumeSlider->setGeometry(QRect(748, 48, 131, 16));
        volumeSlider->setOrientation(Qt::Horizontal);
        widget = new QWidget(bottom_widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(190, 49, 131, 34));
        current_label = new QLabel(widget);
        current_label->setObjectName(QString::fromUtf8("current_label"));
        current_label->setGeometry(QRect(9, 9, 41, 16));
        total_label = new QLabel(widget);
        total_label->setObjectName(QString::fromUtf8("total_label"));
        total_label->setGeometry(QRect(67, 9, 51, 16));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 9, 16, 16));
        image_label = new QLabel(bottom_widget);
        image_label->setObjectName(QString::fromUtf8("image_label"));
        image_label->setGeometry(QRect(34, 24, 71, 61));
        image_label->setStyleSheet(QString::fromUtf8("image: url(:/resource/image2/jaychou_1.jpg);"));
        songName = new QLineEdit(bottom_widget);
        songName->setObjectName(QString::fromUtf8("songName"));
        songName->setGeometry(QRect(114, 28, 161, 23));
        dir_pushButton = new QPushButton(bottom_widget);
        dir_pushButton->setObjectName(QString::fromUtf8("dir_pushButton"));
        dir_pushButton->setGeometry(QRect(1000, 30, 50, 50));
        dir_pushButton->setStyleSheet(QString::fromUtf8("image: url(:/resource/image/dir.png);"));
        label_6 = new QLabel(bottom_widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(920, 40, 41, 41));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/resource/image/5.png")));
        label_6->setScaledContents(true);
        top_widget = new QWidget(mainDisplayWidget);
        top_widget->setObjectName(QString::fromUtf8("top_widget"));
        top_widget->setGeometry(QRect(150, 0, 1071, 71));
        top_widget->setStyleSheet(QString::fromUtf8(""));
        user_pushButton = new QPushButton(top_widget);
        user_pushButton->setObjectName(QString::fromUtf8("user_pushButton"));
        user_pushButton->setGeometry(QRect(659, 10, 41, 41));
        user_pushButton->setAutoFillBackground(false);
        user_pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	image: url(:/resource/image/discord.png);\n"
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
"    background-color: #d5eaf2; /* \346\214\211\344\270\213\346\214\211\351\222\256\346\227"
                        "\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\351\235\236\345\270\270\346\265\205\347\232\204\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3498db; /* \346\214\211\344\270\213\346\214\211\351\222\256\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\346\233\264\346\267\261\347\232\204\350\223\235\350\211\262 */\n"
"}"));
        label = new QLabel(top_widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(705, 14, 61, 31));
        QFont font6;
        font6.setPointSize(10);
        label->setFont(font6);
        label_2 = new QLabel(top_widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(777, 20, 41, 21));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/resource/image/VIP.png);\n"
"background-color: rgb(196, 255, 253);"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/resource/image/VIP.png")));
        label_2->setScaledContents(true);
        lineEdit = new QLineEdit(top_widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(280, 10, 281, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #bdc3c7; /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    border-radius: 3px; /* \345\234\206\350\247\222 */\n"
"    background-color: #ecf0f1; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #3498db; /* \350\216\267\345\276\227\347\204\246\347\202\271\346\227\266\347\232\204\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"}\n"
"\n"
""));
        label_32 = new QLabel(top_widget);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(840, 14, 31, 31));
        label_32->setPixmap(QPixmap(QString::fromUtf8(":/resource/image/1.png")));
        label_32->setScaledContents(true);
        label_33 = new QLabel(top_widget);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(100, 10, 41, 31));
        label_33->setPixmap(QPixmap(QString::fromUtf8(":/resource/image/3.png")));
        label_33->setScaledContents(true);
        label_34 = new QLabel(top_widget);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(564, 14, 31, 31));
        label_34->setPixmap(QPixmap(QString::fromUtf8(":/resource/image/search.png")));
        label_34->setScaledContents(true);
        main_widget->raise();
        bottom_widget->raise();
        top_widget->raise();
        left_widget->raise();

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
        record_pushButton->setText(QCoreApplication::translate("framelessWidget", "\346\214\211\344\275\217\350\257\264\350\257\235", nullptr));
        voice1_checkBox->setText(QCoreApplication::translate("framelessWidget", "\350\201\206\345\260\217\347\222\207", nullptr));
        voice2_checkBox->setText(QCoreApplication::translate("framelessWidget", "\345\260\217\345\200\251", nullptr));
        voice3_checkBox->setText(QCoreApplication::translate("framelessWidget", "\345\260\217\351\241\276", nullptr));
        paimeng_3->setText(QString());
        paimeng_1->setText(QString());
        paimeng_5->setText(QString());
        paimeng_4->setText(QString());
        paimeng_2->setText(QString());
        label_8->setText(QString());
        label_12->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_13->setText(QString());
        label_7->setText(QCoreApplication::translate("framelessWidget", "\346\216\250\350\215\220", nullptr));
        label_9->setText(QCoreApplication::translate("framelessWidget", "Hi ,Airwave  \344\273\212\346\227\245\344\270\272\344\275\240\346\216\250\350\215\220", nullptr));
        label_14->setText(QString());
        label_15->setText(QString());
        label_16->setText(QString());
        label_17->setText(QString());
        label_18->setText(QString());
        label_19->setText(QString());
        label_20->setText(QString());
        label_21->setText(QCoreApplication::translate("framelessWidget", "\347\214\234\344\275\240\345\226\234\346\254\242", nullptr));
        label_22->setText(QCoreApplication::translate("framelessWidget", "\344\273\212\346\227\245\346\216\250\350\215\220", nullptr));
        label_23->setText(QCoreApplication::translate("framelessWidget", "\346\235\234\346\257\224\351\237\263\346\225\210", nullptr));
        label_24->setText(QCoreApplication::translate("framelessWidget", "\345\221\250\346\235\260\344\274\246\346\255\214\346\233\262\345\244\247\345\205\250\357\274\201\344\270\200\345\274\240\346\255\214\345\215\225\345\220\254\345\256\214\345\205\250\351\203\250", nullptr));
        label_25->setText(QCoreApplication::translate("framelessWidget", "\350\210\222\345\216\213\350\275\273\351\237\263\357\274\214\345\256\211\351\235\231\345\220\254\351\243\216", nullptr));
        label_26->setText(QCoreApplication::translate("framelessWidget", "\347\216\251\345\256\266\345\202\254\346\263\252\346\233\262", nullptr));
        label_27->setText(QCoreApplication::translate("framelessWidget", "\350\226\233\344\271\213\350\260\24610w+\345\206\267\351\227\250\345\215\225\346\233\262", nullptr));
        label_28->setText(QCoreApplication::translate("framelessWidget", "\347\231\275\345\231\252\351\237\263 | \345\244\247\350\207\252\347\204\266\347\232\204\351\246\210\350\265\240", nullptr));
        label_29->setText(QCoreApplication::translate("framelessWidget", "\347\235\241\346\242\246\350\264\251\345\215\226\345\272\227", nullptr));
        label_30->setText(QCoreApplication::translate("framelessWidget", "\346\216\242\347\264\242\345\206\222\351\231\251\344\271\213\346\227\205", nullptr));
        label_31->setText(QCoreApplication::translate("framelessWidget", "\345\277\253\345\216\273\347\235\241\350\247\211", nullptr));
        iflytek_pushButton->setText(QCoreApplication::translate("framelessWidget", "\346\230\237\347\201\253", nullptr));
        song_pushButton->setText(QCoreApplication::translate("framelessWidget", "\351\237\263\344\271\220", nullptr));
        recommend_pushButton->setText(QCoreApplication::translate("framelessWidget", "\346\216\250\350\215\220", nullptr));
        label_3->setText(QString());
        label_5->setText(QCoreApplication::translate("framelessWidget", "OuterWilds", nullptr));
        play_pushButton->setText(QString());
        pre_pushButton->setText(QString());
        next_pushButton->setText(QString());
        volume_pushButton->setText(QString());
        current_label->setText(QCoreApplication::translate("framelessWidget", "00:00", nullptr));
        total_label->setText(QCoreApplication::translate("framelessWidget", "00:00", nullptr));
        label_4->setText(QCoreApplication::translate("framelessWidget", "/", nullptr));
        image_label->setText(QString());
        songName->setText(QCoreApplication::translate("framelessWidget", "       \346\232\202\346\227\240\346\255\214\346\233\262\346\222\255\346\224\276", nullptr));
        dir_pushButton->setText(QString());
        label_6->setText(QString());
        user_pushButton->setText(QString());
        label->setText(QCoreApplication::translate("framelessWidget", "Airwave", nullptr));
        label_2->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("framelessWidget", "\346\220\234\347\264\242\351\237\263\344\271\220", nullptr));
        label_32->setText(QString());
        label_33->setText(QString());
        label_34->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class framelessWidget: public Ui_framelessWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAMELESSWIDGET_H
