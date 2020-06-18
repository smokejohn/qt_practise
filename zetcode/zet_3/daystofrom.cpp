#include <QTextStream>
#include <QDate>

int main(void) {

    QTextStream out(stdout);

    QDate dt(2020, 6, 14);
    QDate nd = dt.addDays(55);

    QDate xmas(2020, 12, 24);

    out << "55 days from " << dt.toString() << " is " << nd.toString() << endl;
    out << "There are " << QDate::currentDate().daysTo(xmas) << " days till Christmas" << endl;

    return 0;

}
