#ifndef MAPSQUARE_H
#define MAPSQUARE_H
#include "MapGeneric.h"

class MapSquare : public MapGeneric {
    public:
    MapSquare();
    ~MapSquare();
    private:
    int f(int x);
};

#endif