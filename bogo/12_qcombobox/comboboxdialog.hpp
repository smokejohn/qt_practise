#ifndef COMBOBOXDIALOG_H
#define COMBOBOXDIALOG_H

#include <QDialog>

namespace Ui {
    class ComboBoxDialog;
}

class ComboBoxDialog : public QDialog
{
    Q_OBJECT

    public:
        explicit ComboBoxDialog(QWidget *parent = 0);
        ~ComboBoxDialog();

    private slots:
        void on_pushButton_clicked();

    private:
    Ui::ComboBoxDialog *ui;
};


#endif //COMBOBOXDIALOG_H
