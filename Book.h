#ifndef Book_
#define Book_

#include "Document.h"

class Book : public Document{
    public:
    Book();
    Book(int IdNum);
    virtual int getDocumentID();
};

#endif