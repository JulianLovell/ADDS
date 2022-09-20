#include "MapAbsoluteValue.h"

MapAbsoluteValue::MapAbsoluteValue() : MapGeneric() {}

int MapAbsoluteValue::f(int x) {
    if (x >= 0) {
        return x;
    }
    return x*-1;
}

MapAbsoluteValue::~MapAbsoluteValue() {}