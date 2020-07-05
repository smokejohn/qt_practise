#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

void write(QString filename)
{
    QFile file(filename);

    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug() << "Could not open file for writing.";
        return;
    }

    QTextStream out(&file);
    out << "QFile Tutorial";
    file.flush();
    file.close();
}

void read(QString filename)
{
    QFile file(filename);

    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "Could not open file for reading.";
        return;
    }

    QTextStream in(&file);
    QString myText = in.readAll();
    qDebug() << myText;

    file.close();
}

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    QString filename = "/home/account/test.txt";
    write(filename);
    read(filename);

    return app.exec();
}
