#include <QString>

#include "book.h"

Book::Book(QString author, QString title) : 
    author{author}, title{title} {}

QString Book::getAuthor() const {

    return author;
}

QString Book::getTitle() const{

    return title;
}
