#include "splitterdialog.h"
#include "ui_splitterdialog.h"

SplitterDialog::SplitterDialog(QWidget *parent) 
    : QDialog(parent),
    ui(new Ui::SplitterDialog)
{
    ui->setupUi(this);
}

SplitterDialog::~SplitterDialog()
{
    delete ui;
}

