#include <QCoreApplication>
#include <QDir>
#include <QDebug>

int main(int argc, char *argv[]) {

    QCoreApplication app(argc, argv);
    QDir dir1("/etc");
    QDir dir2("/powerironing");

    // output: boolean true false
    qDebug() << dir1.exists() << dir2.exists();

    return app.exec();
}
