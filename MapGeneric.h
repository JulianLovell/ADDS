#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <vector>

class MapGeneric {
    public:
    std::vector<int> map(std::vector<int> vec);
    MapGeneric();
    ~MapGeneric();
    private:
    int count;
    virtual int f(int x) = 0;
};

#endif