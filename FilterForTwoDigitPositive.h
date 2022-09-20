#ifndef FILTERFORTWODIGITPOSITIVE_H
#define FILTERFORTWODIGITPOSITIVE_H
#include "FilterGeneric.h"

class FilterForTwoDigitPositive : public FilterGeneric {
    public:
    FilterForTwoDigitPositive();
    ~FilterForTwoDigitPositive();
    private:
    virtual bool g(int x);
};

#endif