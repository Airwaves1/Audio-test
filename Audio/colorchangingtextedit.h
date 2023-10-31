#include <QTextEdit>
#include <QTimer>

class ColorChangingTextEdit : public QTextEdit
{
    Q_OBJECT

public:
    ColorChangingTextEdit(QWidget *parent = nullptr) : QTextEdit(parent)
    {
        // 设置定时器，每1000毫秒（1秒）触发一次timeout()信号
        timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(changeBorderColor()));

        // 启动定时器
        timer->start(1000); // 每隔1秒切换一次颜色
    }

public slots:
    void changeBorderColor()
    {
        // 生成随机颜色
        QColor color(qrand() % 256, qrand() % 256, qrand() % 256);

        // 将TextEdit的边框颜色设置为随机颜色
        QString styleSheet = QString("QTextEdit { border: 2px solid %1; }").arg(color.name());
        this->setStyleSheet(styleSheet);
    }

private:
    QTimer* timer;
};
