#include <QTextStream>
#include <QFile>

int main(int argc, char *argv[]) {

    QTextStream out(stdout);

    if (argc != 3) {

        qWarning("Usage: ./copy_file source destination");
        return 1;
    }

    QString source = argv[1];

    if (!QFile(source).exists()) {

        qWarning("The source file does not exist");
        return 1;
    }

    QString destination(argv[2]);

    QFile::copy(source, destination);

    return 0;
}
