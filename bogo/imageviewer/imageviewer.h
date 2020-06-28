#ifndef IMAGEVIEWER_H
#define IMAGEVIEWER_H

#include <QMainWindow>
#ifndef QT_NO_PRINTER
#include <QPrinter>
#endif

class QAction;
class QLabel;
class QMenu;
class QScrollArea;
class QScrollBar;

namespace Ui {
    class ImageViewer;
}

class ImageViewer : public QMainWindow {

    Q_OBJECT

    public:
        explicit ImageViewer(QWidget *parent = 0);
        ~ImageViewer();

    private slots:
        void on_openAct_triggered();
        void on_printAct_triggered();
        void on_exitAct_triggered();
        void on_zoomInAct_triggered();
        void on_zoomOutAct_triggered();
        void on_normalSizeAct_triggered();
        void on_fitToWindowAct_triggered();
        void on_aboutAct_triggered();
        void on_aboutQtAct_triggered();

    private:
        Ui::ImageViewer *ui;

        QLabel *imageLabel;
        QScrollArea *scrollArea;

        QAction *openAct;
        QAction *printAct;
        QAction *exitAct;
        QAction *zoomInAct;
        QAction *zoomOutAct;
        QAction *normalSizeAct;
        QAction *fitToWindowAct;
        QAction *aboutAct;
        QAction *aboutQtAct;

        double scaleFactor;

        void updateActions();
        void scaleImage(double factor);
        void adjustScrollBar(QScrollBar *scrollBar, double factor);

#ifndef QT_NO_PRINTER
        QPrinter printer;
#endif
};

#endif //IMAGEVIEWER_H
