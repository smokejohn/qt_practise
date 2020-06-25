#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

    public:
        explicit Dialog(QWidget *parent = 0);
        ~Dialog();

    private:
        Ui::Dialog *ui;
};

#endif //MYDIALOG_H
