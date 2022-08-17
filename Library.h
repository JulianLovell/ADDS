#ifndef Lib
#define Lib

#include <array>
#include "Document.h"

class Library {
    private:
    std::array<Document *, 5 > storage;
    int counter = 0;

    public:
    Library();
    void addDocument(std::array<Document *, 5 > storage, Document * x);
    void hasDocument(std::array<Document *, 5 > storage);
    std::array<Document *, 5 > getDocuments();
};

#endif
