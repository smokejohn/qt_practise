#include "ui_layoutdialog.h"
#include "layoutdialog.h"

#include <QDialog>

LayoutDialog::LayoutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LayoutDialog)
{

    ui->setupUi(this);
}

LayoutDialog::~LayoutDialog()
{
    delete ui;
}
