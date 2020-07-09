#include <QApplication>
#include "comboboxdialog.hpp"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    ComboBoxDialog window;
    window.show();

    return app.exec();
}
