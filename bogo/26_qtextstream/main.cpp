#include <QCoreApplication>
#include <QTextStream>
#include <QFile>
#include <QDebug>

void write()
{
    QFile file("./simple.txt");
    if(file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        // We're going to stream text to the file
        QTextStream stream(&file);

        stream << "Debussy\n";
        stream << "Rabel\n";

        file.close();
        qDebug() << "Writing finished";
    }
}

void read()
{
    QFile file("./simple.txt");
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        // We stream file content to the QString
        QTextStream stream(&file);

        QString line;
        do {
            line = stream.readLine();
            qDebug() << line;
        } while (!line.isNull());

        file.close();
        qDebug() << "Reading finished";
    }
}



int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    write();
    read();

    return app.exec();
}
