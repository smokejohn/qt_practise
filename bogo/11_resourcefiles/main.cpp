
#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

void read(QString filename)
{
    QFile file(filename);

    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "Could not open the file for reading";
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

    read(":/res/CMakeLists.txt");

    return app.exec();
}
