#include <QTextStream>
#include <QFileInfo>
#include <QDateTime>

int main(int argc, char *argv[]) {

    QTextStream out(stdout);

    if (argc != 2) {

        qWarning("Usage: ./file_times file");
        return 1;
    }

    QString filename = argv[1];

    if (!QFile(filename).exists()) {

        qWarning("The file does not exist");
        return 1;
    }

    QFileInfo fileinfo(filename);

    QDateTime last_read = fileinfo.lastRead();
    QDateTime last_modified = fileinfo.lastModified();

    out << "Last read: " << last_read.toString() << endl;
    out << "Last modified: " << last_modified.toString() << endl;

    return 0;
}
