#include "imageviewer.h"
#include "ui_imageviewer.h"

#include <QDebug>
#include <QtWidgets>
#include <QFileDialog>
#include <QMessageBox>

#ifndef QT_NO_PRINTER
#include <QPrintDialog>
#endif

ImageViewer::ImageViewer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ImageViewer)
{
    ui->setupUi(this);

    openAct = ui->openAct;
    printAct = ui->printAct;
    exitAct = ui->exitAct;
    zoomInAct = ui->zoomInAct;
    zoomOutAct = ui->zoomOutAct;
    normalSizeAct = ui->normalSizeAct;
    fitToWindowAct = ui->fitToWindowAct;
    aboutAct = ui->aboutAct;
    aboutQtAct = ui->aboutQtAct;

    imageLabel = new QLabel;
    imageLabel->setBackgroundRole(QPalette::Base);
    imageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    imageLabel->setScaledContents(true);

    scrollArea = new QScrollArea;
    scrollArea->setBackgroundRole(QPalette::Dark);
    scrollArea->setWidget(imageLabel);
    setCentralWidget(scrollArea);

    setWindowTitle(tr("Image Viewer"));
    resize(500, 400);

}

ImageViewer::~ImageViewer()
{
    delete ui;
}

void ImageViewer::updateActions()
{
    zoomInAct->setEnabled(!fitToWindowAct->isChecked());
    zoomOutAct->setEnabled(!fitToWindowAct->isChecked());
    normalSizeAct->setEnabled(!fitToWindowAct->isChecked());
}

void ImageViewer::scaleImage(double factor)
{
    Q_ASSERT(imageLabel->pixmap());
    scaleFactor *= factor;
    imageLabel->resize(scaleFactor * imageLabel->pixmap()->size());

    adjustScrollBar(scrollArea->horizontalScrollBar(), factor);
    adjustScrollBar(scrollArea->verticalScrollBar(), factor);

    zoomInAct->setEnabled(scaleFactor < 3.0);
    zoomOutAct->setEnabled(scaleFactor > 0.333);

}

void ImageViewer::adjustScrollBar(QScrollBar *scrollBar, double factor)
{
    scrollBar->setValue(int(factor * scrollBar->value()
                + ((factor -1) * scrollBar->pageStep()/2)));
}

void ImageViewer::on_openAct_triggered()
{
    qDebug() << "open()";
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), QDir::currentPath());

    if (!fileName.isEmpty()) {
        QImage image(fileName);
        if (image.isNull()) {
            QMessageBox::information(this, tr("Image Viewer"), tr("Cannot load %1. ").arg(fileName));
            return;
        }
        imageLabel->setPixmap(QPixmap::fromImage(image));
        scaleFactor = 1.0;

        printAct->setEnabled(true);
        fitToWindowAct->setEnabled(true);
        updateActions();

        if (!fitToWindowAct->isChecked())
            imageLabel->adjustSize();
    }
}

void ImageViewer::on_printAct_triggered()
{
    Q_ASSERT(!imageLabel->pixmap()->isNull());
#if defined(QT_PRINTSUPPORT_LIB) && QT_CONFIG(printdialog)
    QPrintDialog dialog(&printer, this); 
    if (dialog.exec()) {
        QPainter painter(&printer);
        QPixmap pixmap = *imageLabel->pixmap();
        QRect rect = painter.viewport();
        QSize size = pixmap.size();
        size.scale(rect.size(), Qt::KeepAspectRatio);
        painter.setViewport(rect.x(), rect.y(), size.width(), size.height());
        painter.setWindow(pixmap.rect());
        painter.drawPixmap(0, 0, pixmap);
    }
#endif
}

void ImageViewer::on_exitAct_triggered()
{
    qApp->quit();
}

void ImageViewer::on_zoomInAct_triggered()
{
    scaleImage(1.25);
}

void ImageViewer::on_zoomOutAct_triggered()
{
    scaleImage(0.8);
}

void ImageViewer::on_normalSizeAct_triggered()
{
    imageLabel->adjustSize();
    scaleFactor = 1.0;
}

void ImageViewer::on_fitToWindowAct_triggered()
{
    bool fitToWindow = fitToWindowAct->isChecked();
    scrollArea->setWidgetResizable(fitToWindow);
    if (!fitToWindow) {
        on_normalSizeAct_triggered();
    }
    updateActions();
}

void ImageViewer::on_aboutAct_triggered()
{
    QMessageBox::about(this, tr("About Image Viewer"),
            tr("<p>The <b>Image Viewer</b> example shows how to combine QLabel "
                "and QScrollArea to display an image. QLabel is typically used "
                "for displaying a text, but it can also display an image. "
                "QScrollArea provides a scrolling view around another widget. "
                "If the child widget exceeds the size of the frame, QScrollArea "
                "automatically provides scroll bars. </p><p>The example "
                "demonstrates how QLabel's ability to scale its contents "
                "(QLabel::scaledContets), and QScrollArea's ability to "
                "automatically resize its contents "
                "(QScrollArea::widgetResizeable), can be used to implement "
                "zooming and scaling features. </p><p>In adition the example "
                "shows how to use QPainter to print an image.</p>"));
}

void ImageViewer::on_aboutQtAct_triggered()
{
    QMessageBox::aboutQt(this);
}

