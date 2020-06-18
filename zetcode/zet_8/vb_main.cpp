#include "verticalbox.h"
#include <QApplication>

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    VerticalBox window;

    window.resize(240, 230);
    window.setWindowTitle("Vertical Box");
    window.show();

    return app.exec();
}
