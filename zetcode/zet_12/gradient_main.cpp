#include <QApplication>
#include "gradient.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    Gradient window;

    window.resize(350, 280);
    window.setWindowTitle("QLinearGradient");
    window.show();

    return app.exec();

}
