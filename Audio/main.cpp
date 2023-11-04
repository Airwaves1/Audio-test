#include "widget.h"

#include <QApplication>
#include"qtmaterialautocomplete.h"
#include"framelessWidget.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    framelessWidget w;
    w.setWindowFlag(Qt::FramelessWindowHint);
    w.show();
    return a.exec();
}
