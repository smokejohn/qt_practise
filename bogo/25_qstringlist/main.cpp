#include <QCoreApplication>
#include <QStringList>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    // A QString
    QString str = "A,B,C,D,E,F,G";
    qDebug() << "QString str = " << str;

    QStringList List;
    qDebug() << "split str using ',' as a delimiter";
    List = str.split(",");
    qDebug() << "List = " << List;
    foreach(QString item, List)
        qDebug() << "List items = " << item;

    qDebug() << "Replace one of the Lists items";
    List.replaceInStrings("C", "CCC");
    qDebug() << "List = " << List;

    qDebug() << "Join all items in the List";
    QString joinedString = List.join(", ");
    qDebug() << "joined string = " << joinedString;

    return app.exec();
}
