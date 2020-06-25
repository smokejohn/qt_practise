#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h" 

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_Window_triggered()
{
    /* Dialog mDialog; */
    /* mDialog.setModal(true); */
    /* mDialog.exec(); */

    mDialog = new Dialog(this);
    mDialog->show();
}
