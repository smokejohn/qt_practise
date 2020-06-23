#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    MainWindow window;

    window.setWindowTitle("MainWindow");
    window.show();

    return app.exec();
}
