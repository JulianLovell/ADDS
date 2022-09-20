#include "ReduceMinimum.h"

ReduceMinimum::ReduceMinimum() : ReduceGeneric() {}

int ReduceMinimum::binaryOperator(int x, int y) {
    if (x > y) {
        return y;
    }
    return x;
}

ReduceMinimum::~ReduceMinimum() {}