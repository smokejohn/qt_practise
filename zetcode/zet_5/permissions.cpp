#include <QTextStream>
#include <QFile>

int main(int argc, char *argv[]) {

    QTextStream out(stdout);

    if (argc != 2) {

        qWarning("Usage: ./permissions file");
        return 1;
    }

    QString filename = argv[1];

    if (!QFile(filename).exists()) {

        qWarning("The file does not exist");
        return 1;
    }

    QFile::Permissions ps = QFile::permissions(filename);

    QString fper;

    if (ps & QFile::ReadOwner) {
        fper.append('r');
    } else {
        fper.append('-');
    }

    if (ps & QFile::WriteOwner) {
        fper.append('w');
    } else {
        fper.append('-');
    }

    if (ps & QFile::ExeOwner) {
        fper.append('x');
    } else {
        fper.append('-');
    }

    if (ps & QFile::ReadGroup) {
        fper.append('r');
    } else {
        fper.append('-');
    }

    if (ps & QFile::WriteGroup) {
        fper.append('w');
    } else {
        fper.append('-');
    }

    if (ps & QFile::ExeGroup) {
        fper.append('x');
    } else {
        fper.append('-');
    }

    if (ps & QFile::ReadOther) {
        fper.append('r');
    } else {
        fper.append('-');
    }

    if (ps & QFile::WriteOther) {
        fper.append('w');
    } else {
        fper.append('-');
    }

    if (ps & QFile::ExeOther) {
        fper.append('x');
    } else {
        fper.append('-');
    }

    out << fper << endl;

    return 0;
}
