#include <QPainter>
#include <QPainterPath>
#include "transparent.h"

Transparent::Transparent(QWidget *parent) 
    : QWidget(parent)
{ }

void Transparent::paintEvent(QPaintEvent *e) {

    Q_UNUSED(e);

    doPainting();
}

void Transparent::doPainting() {

    QPainter painter(this);

    for (int i = 1; i <= 11; i++) {
        painter.setOpacity(i * 0.1);
        painter.fillRect(50*i, 20, 40, 40, Qt::darkGray);
    }
}
