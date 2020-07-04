#include <QCoreApplication>
#include <QDir>
#include <QDebug>

int main(int argc, char *argv[]) {

    QCoreApplication app(argc, argv);
    QDir dir1("/etc");
    QDir dir2("/powerironing");
    // output: boolean true false
    qDebug() << dir1.exists() << dir2.exists();

    QDir dir3;
    foreach(QFileInfo item, dir3.drives())
    {
        qDebug() << item.absoluteFilePath();
    }

    return app.exec();
}
