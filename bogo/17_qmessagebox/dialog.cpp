#include "dialog.h"
#include "ui_dialog.h"

#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    int ret;

    // Property-based API
    if(ui->radioButton->isChecked())
    {
        QMessageBox msgBox;
        msgBox.setText("The document has been modified.");
        ret = msgBox.exec();
    }

    // A better approach
    else if(ui->radioButton_2->isChecked())
    {
        QMessageBox msgBox;
        msgBox.setText("The document has been modified.");
        msgBox.setInformativeText("Do you want to save your changes?");
        msgBox.setStandardButtons(QMessageBox::Save |
                                  QMessageBox::Discard |
                                  QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Save);
        ret = msgBox.exec();
    }

    // Warning - static functions API
    else
    {
        ret = QMessageBox::warning(this, tr("My Application"),
                                   tr("The document has been modified.\n"
                                   "Do you want to save your changes?"),
                                   QMessageBox::Save |
                                   QMessageBox::Discard |
                                   QMessageBox::Cancel,
                                   QMessageBox::Save);
    }

    switch(ret) {
        case QMessageBox::Save:
            // Save was clicked
            break;
        case QMessageBox::Discard:
            // Discard was clicked
            break;
        case QMessageBox::Cancel:
            // Cancel was clicked
            break;
        default:
            break;
    }

}
