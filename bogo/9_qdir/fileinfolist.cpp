#include <QCoreApplication>
#include <QDir>
#include <QDebug>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    QString path = "/tmp";
    QDir dir(path);

    foreach (QFileInfo item, dir.entryInfoList())
    {
        if(item.isDir())
            qDebug() << "Dir: " << item.absoluteFilePath();
        if(item.isFile())
            qDebug() << "File: " << item.absoluteFilePath();
    }

    return app.exec();
}
