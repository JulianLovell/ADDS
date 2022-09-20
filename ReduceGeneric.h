#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <vector>

class ReduceGeneric {
    public:
    ReduceGeneric();
    int reduce(std::vector<int> vec);
    ~ReduceGeneric();
    private:
    int count;
    int value;
    virtual int binaryOperator(int x,int y) = 0;
};

#endif