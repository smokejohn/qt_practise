#include <QApplication>
#include "tooltipsdialog.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Dialog window;
    window.show();

    return app.exec();
}
