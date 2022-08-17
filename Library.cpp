#include <iostream>
using namespace std;

#include "Library.h"

Library::Library() {array<Document *, 5 > storage;}

void Library::addDocument(array<Document *, 5 > storage, Document * x) {
    storage.at(this->counter) = x;
    this->counter++;
}

void Library::hasDocument(array<Document *, 5 > storage) {
    if(storage.empty() == true) {
        cout << "Empty" << endl;
    }
    
    else {
        cout << "Not Empty" << endl;
    }
}

std::array<Document *, 5 > Library::getDocuments() {return this->storage;};