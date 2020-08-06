#ifndef PAINTERDIALOG_H
#define PAINTERDIALOG_H

#include <QDialog>
#include <QPainter>

class PainterDialog : public QDialog
{

    public:
        explicit PainterDialog(QWidget *parent = 0);
        
    protected:
        void paintEvent(QPaintEvent *e);
        void paintLines(QPainter *MyPainter);

};


#endif //PAINTERDIALOG_H
