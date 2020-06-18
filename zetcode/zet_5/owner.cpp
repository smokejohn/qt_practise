#include <QTextStream>
#include <QFileInfo>

int main(int argc, char *argv[]) {

    QTextStream out(stdout);

    if (argc != 2) {

        qWarning("Usage: ./owner file");
        return 1;
    }

    QString filename = argv[1];

    if (!QFile(filename).exists()) {

        qWarning("The file does not exist");
        return 1;
    }

    QFileInfo fileinfo(filename);

    QString group = fileinfo.group();
    QString owner = fileinfo.owner();

    out << "Group: " << group << endl;
    out << "Owner: " << owner << endl;

    return 0;

}
