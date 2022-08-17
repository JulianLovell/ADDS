#include "Book.h"

Book::Book(int IdNum) {this->IdNum = IdNum;}

int Book::getDocumentID(){
    return this->IdNum;
}