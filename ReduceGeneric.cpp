#include "ReduceGeneric.h"

ReduceGeneric::ReduceGeneric() {
    count = 2;
    value = 0;
}

int ReduceGeneric::reduce(std::vector<int> vec) {
    if (count == 2) {
        value = binaryOperator(vec[0], vec[1]);
    }
    if (count == static_cast<int>(vec.size())) {
        count = 2;
        return value;
    }
    value = binaryOperator(value, vec[count]);
    count++;
    return reduce(vec);
}

ReduceGeneric::~ReduceGeneric() {}