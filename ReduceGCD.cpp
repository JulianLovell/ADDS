#include "ReduceGCD.h"

ReduceGCD::ReduceGCD() : ReduceGeneric() {}

int ReduceGCD::binaryOperator(int x, int y) {
    while (y != 0) {
        int remainder = x%y;
        x = y;
        y = remainder;
    }
    return x;
}

ReduceGCD::~ReduceGCD() {}