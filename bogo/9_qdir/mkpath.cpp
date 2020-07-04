#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    QString path = "/home/account/test";

    QDir dir(path);
    if(!dir.exists())
    {
        qDebug() << "Creating " << path << "directory";
        dir.mkpath(path);
    }
    else
    {
        qDebug() << path << " already exists";
    }

    return app.exec();
}
