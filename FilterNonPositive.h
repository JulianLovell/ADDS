#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H
#include "FilterGeneric.h"

class FilterNonPositive : public FilterGeneric {
    public:
    FilterNonPositive();
    ~FilterNonPositive();
    private:
    virtual bool g(int x);
};

#endif