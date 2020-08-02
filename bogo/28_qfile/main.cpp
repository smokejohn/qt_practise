#include <QCoreApplication>
#include <QFile>
#include <QDataStream>
#include <QString>
#include <QMap>

#include <QDebug>

void Save()
{
    QString filename = "./serial.txt";
    QFile file(filename);

    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "Could not open " << filename;
        return;
    }

    int MyPass = 999;
    QMap<int, QString> map;
    map.insert(1, "uno");
    map.insert(2, "dos");
    map[3] = "tres";

    QDataStream out(&file);
    out.setVersion(QDataStream::Qt_5_12);

    out << MyPass << map;

    file.flush();
    file.close();
}

void Load()
{
    QString filename = "./serial.txt";
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "Could not open " << filename;
        return;
    }

    int MyPass;
    QMap<int, QString> map;

    QDataStream in(&file);
    in.setVersion(QDataStream::Qt_5_12);

    in >> MyPass >> map;

    file.close();

    qDebug() << "MyPass = " << MyPass;
    foreach(QString item, map.values())
        qDebug() << item;

}


int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    Save();
    Load();

    return app.exec();
}
