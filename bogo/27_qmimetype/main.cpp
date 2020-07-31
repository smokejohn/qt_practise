#include <QCoreApplication>
#include <QString>
#include <QStringList>
#include <QFile>
#include <QFileInfo>
#include <QMimeDatabase>
#include <QMimeType>

#include <QDebug>

// Returning a mimetype for a given QFile
QString mimeReturn(const QFile& file)
{
    QMimeDatabase mimeDatabase;
    QMimeType mimeType;

    mimeType = mimeDatabase.mimeTypeForFile(QFileInfo(file));

    if(mimeType.inherits("video/mp4"))
        return "video/mp4";

    else if(mimeType.inherits("video/mpeg"))
        return "video/mpeg";

    else if(mimeType.inherits("video/ogg"))
        return "video/ogg";

    else if(mimeType.inherits("video/quicktime"))
        return "video/quicktime";

    else if(mimeType.inherits("video/x-msvideo"))
        return "video/x-msvideo";

    else if(mimeType.inherits("video/x-flv"))
        return "video/x-flv";

    else if(mimeType.inherits("video/webm"))
        return "video/webm";

    else if(mimeType.inherits("text/plain"))
        return "text";

    else
        return "";
}

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    QStringList List;
    List << "1.txt" << "2.mp4" << "3.webm" << "4.mov" << "5.flv";

    foreach(QString item, List) {
        qDebug() << item << " ==> " << mimeReturn(item);
    }

    return app.exec();
}
