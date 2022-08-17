#include <iostream>

using namespace std;

#include "Library.h"
#include "Document.h"
#include "Book.h"

int main() {

Library AdelaideLibrary;

Document *p2;
Book * p1 = new Book(11);
p2 = p1;

AdelaideLibrary.addDocument(AdelaideLibrary.getDocuments(), p2);

AdelaideLibrary.hasDocument(AdelaideLibrary.getDocuments());

}