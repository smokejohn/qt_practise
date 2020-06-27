#ifndef IMAGEVIEWER_H
#define IMAGEVIEWER_H

#include <QMainWindow>
#include <QLabel>
#include <QScrollArea>

namespace Ui {
    class ImageViewer;
}

class ImageViewer : public QMainWindow {

    public:
        explicit ImageViewer(QWidget *parent = 0);
        ~ImageViewer();

    private:
        Ui::ImageViewer *ui;
        QLabel *imageLabel;
        QScrollArea *scrollArea;
};

#endif //IMAGEVIEWER_H
