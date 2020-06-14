#include <QTextStream>
#include <QFileInfo>

int main(int argc, char *argv[]) {

    QTextStream out(stdout);

    if (argc != 2) {

        qWarning("Usage: ./file_path file");
        return 1;
    }

    QString filename = argv[1];

    if (!QFile(filename).exists()) {

        qWarning("The file does not exist");
        return 1;
    }

    QFileInfo fileinfo(filename);

    QString absPath = fileinfo.absoluteFilePath();
    QString baseName = fileinfo.baseName();
    QString compBaseName = fileinfo.completeBaseName();
    QString fileName = fileinfo.fileName();
    QString suffix = fileinfo.suffix();
    QString compSuffix = fileinfo.completeSuffix();

    out << "Absolute file path: " << absPath << endl;
    out << "Base name: " << baseName << endl;
    out << "Complete base name: " << compBaseName << endl;
    out << "File name: " << fileName << endl;
    out << "Suffix: " << suffix << endl;
    out << "Whole Suffix: " << compSuffix << endl;

    return 0;
}
