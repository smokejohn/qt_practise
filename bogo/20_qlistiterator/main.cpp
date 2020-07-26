#include <QCoreApplication>
#include <QList>
#include <QDebug>
#include <QListIterator>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    QList<int> List;

    for(int i = 0; i < 10; i++) List.append(i);

    // The QlistIterator constructo takes a QList
    // as argument. aFter construction, the iterator
    // is located at the very beginning of the list
    // (before the first item)
    QListIterator<int> iter(List);

    qDebug() << "Forward...";
    while(iter.hasNext())
    {
        // The next() function returns the next item
        // in the list and advances the iterator.
        qDebug() << iter.next();
    }

    qDebug() << "Backward...";
    while(iter.hasPrevious())
    {
        // The next() function returns the next item
        // in the list and advances the iterator 
        // (backwards in this case)
        qDebug() << iter.previous();
    }

    qDebug() << "Forward while peeking...";
    while(iter.hasNext())
    {
        qDebug() << "peek next ..." << iter.peekNext();
        qDebug() << iter.next();
    } 

    return app.exec();
}
