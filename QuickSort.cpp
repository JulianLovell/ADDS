#include "QuickSort.h"

#include <vector>

using namespace std;

vector<int> append(vector<int> list1, vector<int> list2) {
    for (int i = 0; i < list2.size(); i++) {
        list1.push_back(list2.at(i));
    }

    return list1;
}

vector<int> QuickSort::sort(vector<int> list) {
    if (list.size() <= 1) {
        return list;
    }

    vector<int> less, more;

    int pivot;

    if (list.size() >= 3) {
        pivot = list.at(2);

        list.erase(list.begin() + 2);

    } else {
        pivot = list.at(0);

        list.erase(list.begin());
    }

    for (int i = 0; i < list.size(); i++) {
        if (list.at(i) <= pivot) {
            less.push_back(list.at(i));

        } else {
            more.push_back(list.at(i));
        }
    }

    less = sort(less);
    less.push_back(pivot);
    more = sort(more);

    return append(less, more);
}