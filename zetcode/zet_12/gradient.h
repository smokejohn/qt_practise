#ifndef GRADIENT_H
#define GRADIENT_H

#include <QWidget>

class Gradient : public QWidget {

    public:
        Gradient(QWidget *parent = 0);

    protected:
        void paintEvent(QPaintEvent *e);

    private:
        void doPainting();
};

#endif //GRADIENT_H
