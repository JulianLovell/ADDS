#ifndef FILTERODD_H
#define FILTERODD_H
#include "FilterGeneric.h"

class FilterOdd : public FilterGeneric {
    public:
    FilterOdd();
    ~FilterOdd();
    private:
    virtual bool g(int x);
};

#endif