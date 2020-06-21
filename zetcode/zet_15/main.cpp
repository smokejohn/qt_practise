#include <QApplication>
#include "breakout.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    Breakout window;

    window.setFixedSize(300, 400);
    window.setWindowTitle("Breakout");
    window.show();

    return app.exec();
}
