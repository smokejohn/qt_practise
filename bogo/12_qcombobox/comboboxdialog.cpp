#include "comboboxdialog.hpp"
#include "ui_comboboxdialog.h"

#include <QMessageBox>

ComboBoxDialog::ComboBoxDialog(QWidget *parent) 
    : QDialog(parent),
    ui(new Ui::ComboBoxDialog)
{
    ui->setupUi(this);

    for(int i = 0; i < 10; i++)
    {
        ui->comboBox->addItem("item " + QString::number(i));
    }
}

ComboBoxDialog::~ComboBoxDialog()
{
    delete ui;
}

void ComboBoxDialog::on_pushButton_clicked()
{
    QMessageBox::information(this, "Item Selection", ui->comboBox->currentText());
}
