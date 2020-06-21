#ifndef BREAKOUT_H
#define BREAKOUT_H

#include <QWidget>
#include <QKeyEvent>
#include "ball.h"
#include "brick.h"
#include "paddle.h"


class Breakout : public QWidget {

    public:
        Breakout(QWidget *parent = 0);
        ~Breakout();
        
    protected:
        void paintEvent(QPaintEvent *e);
        void timerEvent(QTimerEvent *e);
        void keyPressEvent(QKeyEvent *e);
        void keyReleaseEvent(QKeyEvent *e);
        void drawObjects(QPainter *qp);
        void finishGame(QPainter *qp, QString msg);
        void moveObjects();

        void startGame();
        void pauseGame();
        void stopGame();
        void victory();
        void checkCollision();

    private:
        int x;
        int timerId;
        static const int N_OF_BRICKS = 30;
        static const int DELAY = 10;
        static const int BOTTOM_EDGE = 400;
        Ball *ball;
        Paddle *paddle;
        Brick *bricks[N_OF_BRICKS];
        bool gameOver;
        bool gameWon;
        bool gameStarted;
        bool paused;

};

#endif //BREAKOUT_H
