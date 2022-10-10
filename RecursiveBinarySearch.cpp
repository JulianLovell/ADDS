using namespace std;

#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch ::search(std::vector<int> list, int goal) {
    return helper(list, goal, 0, list.size());
}

bool RecursiveBinarySearch ::helper(std::vector<int> list, int goal, int start, int end) {
    if (start >= end) {
        return false;
    }

    int middle = (start + end) / 2;

    if (list.at(middle) == goal) {
        return true;
    }

    if (list.at(middle) > goal) {
        return helper(list, goal, start, middle - 1);
    }

    else {
        return helper(list, goal, middle + 1, end);
    }
}