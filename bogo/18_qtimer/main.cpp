#include <QCoreApplication>
#include "mytimer.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    MyTimer timer;

    return app.exec();
}
