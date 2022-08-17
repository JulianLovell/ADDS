#ifndef Doc
#define Doc

class Document {
    private:
    int IdNum;

    public:
    virtual int getDocumentID() = 0;

    friend class Book;
};

#endif