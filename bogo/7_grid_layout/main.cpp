#include <QApplication>
#include <QPushButton>
#include <QGridLayout>

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    QGridLayout *grid = new QGridLayout;
    QPushButton *b1 = new QPushButton("A");
    QPushButton *b2 = new QPushButton("B");
    QPushButton *b3 = new QPushButton("C");
    QPushButton *b4 = new QPushButton("D");
    QPushButton *b5 = new QPushButton("E");
    QPushButton *b6 = new QPushButton("F");

    // addWidget(*Widget, row, column, rowspan, colspan)
    // 0th row
    grid->addWidget(b1,0,0,1,1);
    grid->addWidget(b2,0,1,1,1);
    grid->addWidget(b3,0,2,1,1);

    grid->addWidget(b4,1,0,1,1);
    grid->addWidget(b5,2,0,1,2);
    grid->addWidget(b6,3,0,1,3);

    QWidget *w = new QWidget();

    w->setLayout(grid);

    w->setWindowTitle("Layouts");

    w->show();

    return app.exec();
}
