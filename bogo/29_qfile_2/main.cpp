#include <QCoreApplication>
#include <QFile>
#include <QDataStream>
#include <QString>

#include <QDebug>

class Student
{
    public:
        int ID;
        QString Name;

        friend QDataStream &operator<<(QDataStream &out, const Student &s)
        {
            out << s.ID << s.Name;
            return out;
        }

        friend QDataStream &operator>>(QDataStream &in, Student &s)
        {
            s = Student();
            in >> s.ID >> s.Name;
            return in;
        }
};

void Save()
{
    Student s1;
    s1.ID = 1;
    s1.Name = "Ravel";

    Student s2;
    s2.ID = 2;
    s2.Name = "Schonberg";

    QString filename = "./st.txt";
    QFile file(filename);

    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "Could not open " << filename;
        return;
    }

    QDataStream out(&file);
    out.setVersion(QDataStream::Qt_5_12);

    out << s1 << s2;

    file.flush();
    file.close();
}

void Load()
{
    Student s1;
    Student s2;

    QString filename = "./st.txt";
    QFile file(filename);

    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "Could not open " << filename;
        return;
    }

    QDataStream in(&file);
    in.setVersion(QDataStream::Qt_5_12);

    in >> s1 >> s2;
    
    file.close();

    qDebug() << s1.Name << "'s ID is " << s1.ID;
    qDebug() << s2.Name << "'s ID is " << s2.ID;
}

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    Save();
    Load();
    
    return app.exec();
}
