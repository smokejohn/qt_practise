#ifndef BRICK_H
#define BRICK_H

#include <QImage>
#include <QRect>

class Brick {

    public:
        Brick(int x, int y);
        ~Brick();

    public:
        bool isDestroyed();
        void setDestroyed(bool);
        QRect getRect();
        void setRect(QRect);
        QImage & getImage();

    private:
        QImage image;
        QRect rect;
        bool destroyed;
};

#endif //BRICK_H
