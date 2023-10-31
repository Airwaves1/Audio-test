#ifndef IFLYTEK_H
#define IFLYTEK_H

#include<QProcess>
#include<QThread>
#include<QDebug>
class iflytek:public QThread
{
    Q_OBJECT

public:
    explicit iflytek(QObject *parent = nullptr) : QThread(parent) {}


protected:
    void run() override {
        qDebug() << "开始对话！";
        QProcess process;
        process.setProgram("C:/MyProgram/Anaconda/python.exe");
        process.setArguments({ "C:/Code/Qt/Audio/Audio/scripts/spark.py" });
        process.start();
        QString to_spark = userInput;
        process.write(to_spark.toUtf8() + "\n");
        process.closeWriteChannel();
        process.waitForFinished();
        QByteArray output = process.readAll();
        QString pythonOutput = QString::fromUtf8(output);
        emit processFinished(to_spark, pythonOutput);
    }

signals:
    void processFinished(const QString &input, const QString &output);

public:
    QString userInput;

};


#endif // IFLYTEK_H
