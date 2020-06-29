#include <QApplication>
#include "layoutdialog.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    LayoutDialog window;
    window.show();

    return app.exec();
}
