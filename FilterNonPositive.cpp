#include "FilterNonPositive.h"

FilterNonPositive::FilterNonPositive() : FilterGeneric() {}

bool FilterNonPositive::g(int x) {
    if (x >= 0) {
        return false;
    }
    return true;
}

FilterNonPositive::~FilterNonPositive() {}