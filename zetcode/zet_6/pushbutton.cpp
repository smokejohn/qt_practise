#include <QApplication>
#include <QWidget>
#include <QPushButton>

class MyButton : public QWidget {

    public:
        MyButton(QWidget *parent = 0);
};

MyButton::MyButton(QWidget *parent) : QWidget(parent) {

    QPushButton *quitBtn = new QPushButton("Quit", this);
    quitBtn->setGeometry(50, 40, 75, 30);

    QObject::connect(quitBtn, &QPushButton::clicked, qApp, &QApplication::quit);
    // QObject::connect(quitBtn, SIGNAL(clicked()), qApp, SLOT(quit()));
}


int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    MyButton window;

    window.resize(250, 150);
    window.setWindowTitle("QPushbutton");
    window.show();

    return app.exec();
}

/* 
int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    QWidget window;

    window.resize(250, 150);
    window.setWindowTitle("QPushButton");

    QPushButton button("Quit", &window);
    button.setGeometry(50, 40, 75, 30);

    window.show();

    QObject::connect(&button, SIGNAL(clicked()), &app, SLOT(quit()));

    return app.exec();
}
*/
