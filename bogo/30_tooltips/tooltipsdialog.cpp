#include "tooltipsdialog.h"
#include "ui_tooltipsdialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->pushButton->setToolTip(
            "<h2><b><font color='red'>MyList</font></b></h2>"
            "<ol>"
            "  <li>First</li>"
            "  <li>Second</li>"
            "  <li>Third</li>"
            "</ol>"
            );
    ui->pushButton_2->setToolTip("<img src=':files/img/book.png'/> Book");
}

Dialog::~Dialog()
{
    delete ui;
}
