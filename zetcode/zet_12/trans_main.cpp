#include <QApplication>
#include "transparent.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    Transparent window;

    window.resize(630, 90);
    window.setWindowTitle("Transparent rectangles");
    window.show();

    return app.exec();
}
