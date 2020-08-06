#include <QApplication>
#include "painterdialog.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    PainterDialog window;
    window.show();
    
    return app.exec();
}
