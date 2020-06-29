#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    QHBoxLayout *hbox = new QHBoxLayout;
    QPushButton *b1 = new QPushButton("A");
    QPushButton *b2 = new QPushButton("B");
    QPushButton *b3 = new QPushButton("C");
    hbox->addWidget(b1);
    hbox->addWidget(b2);
    hbox->addWidget(b3);

    QVBoxLayout *vbox = new QVBoxLayout;
    QPushButton *b4 = new QPushButton("D");
    QPushButton *b5 = new QPushButton("E");
    QPushButton *b6 = new QPushButton("F");
    vbox->addWidget(b4);
    vbox->addWidget(b5);
    vbox->addWidget(b6);

    QVBoxLayout *mainbox = new QVBoxLayout;

    mainbox->addLayout(hbox);
    mainbox->addLayout(vbox);

    QWidget *w = new QWidget();

    w->setLayout(mainbox);

    w->setWindowTitle("Layouts");

    w->show();

    return app.exec();
}
