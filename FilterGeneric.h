#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <vector>

class FilterGeneric {
    public:
    std::vector<int> filter(std::vector<int> vec);
    FilterGeneric();
    ~FilterGeneric();
    private:
    virtual bool g(int x) = 0;
    int count;
    std::vector<int> temp;
};

#endif