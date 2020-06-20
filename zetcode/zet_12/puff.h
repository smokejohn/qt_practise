#ifndef PUFF_H
#define PUFF_H

#include <QWidget>

class Puff : public QWidget {

    public:
        Puff(QWidget *parent = 0);

    protected:
        void paintEvent(QPaintEvent *e);
        void timerEvent(QTimerEvent *e);

    private:
        int x;
        qreal opacity;
        int timerId;

        void doPainting();

};

#endif //PUFF_H
