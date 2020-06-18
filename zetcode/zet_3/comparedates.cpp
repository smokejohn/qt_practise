#include <QTextStream>
#include <QDate>

int main(void) {

    QTextStream out(stdout);

    QDate dt1(2020, 5, 14);
    QDate dt2(2019, 5, 14);

    if (dt1 < dt2) {
        out << dt1.toString() << " comes before " << dt2.toString() << endl;
    } else {
        out << dt1.toString() << " comes after " << dt2.toString() << endl;
    }

    return 0;
}
