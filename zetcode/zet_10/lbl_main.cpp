#include <QApplication>
#include "label.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    Label window;
    
    window.setWindowTitle("Label");
    window.show();

    return app.exec();
}
