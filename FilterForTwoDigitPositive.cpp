#include "FilterForTwoDigitPositive.h"

FilterForTwoDigitPositive::FilterForTwoDigitPositive() : FilterGeneric() {}

bool FilterForTwoDigitPositive::g(int x) {
    if (x < 10) {
        return false;
    }
    return true;
}

FilterForTwoDigitPositive::~FilterForTwoDigitPositive() {}