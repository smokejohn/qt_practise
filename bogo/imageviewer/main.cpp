#include "imageviewer.h"
#include <QApplication>

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    ImageViewer w;
    w.show();

    return app.exec();
}
