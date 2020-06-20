#include <QApplication>
#include "rgradient.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    RGradient window;

    window.resize(350, 280);
    window.setWindowTitle("QRadialGradient");
    window.show();

    return app.exec();
}
