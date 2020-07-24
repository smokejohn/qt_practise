#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    statusLabel = new QLabel(this);
    statusProgressBar = new QProgressBar(this);

    statusLabel->setText("Status Label");
    statusProgressBar->setTextVisible(false);

    // add label and progressbar to the status bar
    ui->statusbar->addPermanentWidget(statusLabel);
    ui->statusbar->addPermanentWidget(statusProgressBar);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionMenuAction_triggered()
{
    ui->statusbar->showMessage("Status");
    statusProgressBar->setValue(51);
}
