#include <QApplication>
#include "splitterdialog.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    SplitterDialog window;
    window.setWindowTitle("SplitterDialog");

    window.show();

    return app.exec();
}
