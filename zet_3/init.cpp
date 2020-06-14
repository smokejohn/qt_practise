#include <QTextStream>
#include <QDate>
#include <QTime>

int main(void) {

    QTextStream out(stdout);

    QDate dt1(2020, 6, 14);
    out << "The date is " << dt1.toString() << endl;

    QDate dt2;
    dt2.setDate(2020, 5, 5);
    out << "The date is " << dt2.toString() << endl;

    QTime tm1(17, 57, 30, 80);
    out << "The time is " << tm1.toString("hh:mm:ss.zzz") << endl;

    QTime tm2;
    tm2.setHMS(13, 37, 0, 200);
    out << "The time is " << tm2.toString("hh:mm:ss.zzz") << endl;
    
    return 0;
}
