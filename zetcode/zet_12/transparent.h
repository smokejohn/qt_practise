#ifndef TRANSPARENT_H
#define TRANSPARENT_H

#include <QWidget>

class Transparent : public QWidget {

    public:
        Transparent(QWidget *parent = 0);

    protected:
        void paintEvent(QPaintEvent *e);
        void doPainting();
};


#endif //TRANSPARENT_H
