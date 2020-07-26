#include <QCoreApplication>
#include <QList>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    QList<int> List;

    for(int i = 0; i < 6; i++) List.append(i);
    List.removeOne(4);
    foreach(int n, List) qDebug() << n;

    return app.exec();
}
