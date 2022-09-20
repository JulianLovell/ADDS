#include "MapGeneric.h"

MapGeneric::MapGeneric() {
    count = 0;
}

std::vector<int> MapGeneric::map(std::vector<int> vec){
    if (count == static_cast<int>(vec.size())) {
        count = 0;
        return vec;
    }
    vec[count] = f(vec[count]);
    count++;
    return map(vec);
}

MapGeneric::~MapGeneric() {}