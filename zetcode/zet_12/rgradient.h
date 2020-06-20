#ifndef RGRADIENT_H
#define RGRADIENT_H

#include <QWidget>

class RGradient : public QWidget {

    public:
        RGradient(QWidget *parent = 0);

    protected:
        void paintEvent(QPaintEvent *e);

    private:
        void doPainting();
};

#endif //RGRADIENT_H
