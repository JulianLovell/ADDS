#include "FilterGeneric.h"

FilterGeneric::FilterGeneric() {
    count = 0;
}

std::vector<int> FilterGeneric::filter(std::vector<int> vec) {
    if (count == 0) {
        temp.clear();
    }
    if (count == static_cast<int>(vec.size())) {
        count = 0;
        return temp;
    }
    if (g(vec[count])) {
        temp.push_back(vec[count]);
    }
    count++;
    return filter(vec);
}

FilterGeneric::~FilterGeneric() {}