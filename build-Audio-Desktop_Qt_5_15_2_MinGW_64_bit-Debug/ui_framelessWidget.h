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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QWidget *framelessWidget)
    {
        if (framelessWidget->objectName().isEmpty())
            framelessWidget->setObjectName(QString::fromUtf8("framelessWidget"));
        framelessWidget->resize(1300, 900);
        framelessWidget->setStyleSheet(QString::fromUtf8("*{\n"
"	border:none;\n"
"}\n"
"QPushButton:hover {\n"
"    border-color: #3498db; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #d5eaf2; /* \346\214\211\344\270\213\346\214\211\351\222\256\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\351\235\236\345\270\270\346\265\205\347\232\204\350\223\235\350\211\262 */\n"
"}"));
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
        pushButton = new QPushButton(mainDisplayWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 30, 50, 50));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_2 = new QPushButton(mainDisplayWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(780, 700, 50, 50));
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/resource/image/pre.png);"));
        pushButton_3 = new QPushButton(mainDisplayWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(890, 700, 50, 50));
        pushButton_3->setStyleSheet(QString::fromUtf8("image: url(:/resource/image/pause.png);"));
        pushButton_4 = new QPushButton(mainDisplayWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(1000, 700, 50, 50));
        pushButton_4->setStyleSheet(QString::fromUtf8("image: url(:/resource/image/next.png);"));
        pushButton_5 = new QPushButton(mainDisplayWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(650, 700, 50, 50));
        pushButton_5->setStyleSheet(QString::fromUtf8("image: url(:/resource/image/dir.png);"));
        pushButton_6 = new QPushButton(mainDisplayWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(1110, 700, 50, 50));
        pushButton_6->setStyleSheet(QString::fromUtf8("image: url(:/resource/image/next.png);\n"
"image: url(:/resource/image/volume.png);"));

        mainLayout->addWidget(mainDisplayWidget);


        verticalLayout_3->addLayout(mainLayout);


        verticalLayout->addWidget(mainWidget);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(framelessWidget);

        QMetaObject::connectSlotsByName(framelessWidget);
    } // setupUi

    void retranslateUi(QWidget *framelessWidget)
    {
        framelessWidget->setWindowTitle(QCoreApplication::translate("framelessWidget", "MainWindow", nullptr));
        Button_min->setText(QString());
        Button_max->setText(QString());
        Button_close->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class framelessWidget: public Ui_framelessWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAMELESSWIDGET_H
