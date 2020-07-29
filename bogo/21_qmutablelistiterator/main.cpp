#include <QCoreApplication>
#include <QList>
#include <QListIterator>
#include <QMutableListIterator>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    QList<int> List;

    for(int i = 0; i < 10; i++) List.append(i);

    // The QMutableListIterator constructor takes a Qlist as argument.
    // After construction, the iterator is located at the very 
    // beginning of the list (before the first item)

    QMutableListIterator<int> mIter(List);

    qDebug() << "Modifying element while moving forward...";
    while(mIter.hasNext())
    {
        // The next() function returns the next item in the list
        // and advances the iterator.
        // To remove items as we iterate over thelist, we use 
        // remove().
        // to modify the value of an item, we use setValue().

        int val = mIter.next();

        // odd: remove, even: negate
        if (val % 2 == 1) mIter.remove();
        else if (val % 2 == 0) mIter.setValue(-val);

    }

    qDebug() << "Start again from front...";

    // to Front() moves the iterator to the front of the container
    // (before the first item).

    mIter.toFront();

    qDebug() << "Forward...";
    while(mIter.hasNext()) qDebug() << mIter.next();

    return app.exec();
}
