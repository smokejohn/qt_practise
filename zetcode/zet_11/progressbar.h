#ifndef PROGRESSBAR_H
#define PROGRESSBAR_H

#include <QWidget>
#include <QPushButton>
#include <QProgressBar>

class ProgressBarEx : public QWidget {

    public:
        ProgressBarEx(QWidget *parent = 0);

    private:
        int progress;
        QTimer *timer;
        QProgressBar *pbar;
        QPushButton *startBtn;
        QPushButton *stopBtn;
        static const int DELAY = 200;
        static const int MAX_VALUE = 100;

        void updateBar();
        void startMyTimer();
        void stopMyTimer();
};

#endif //PROGRESSBAR_H
