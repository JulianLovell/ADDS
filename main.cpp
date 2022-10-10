#include <iostream>
using namespace std;

#include "BubbleSort.h"
#include "Sort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

void printVector(vector<int> list) {
    for (int i = 0; i < list.size(); i++) {
        cout << list[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> sort{1, 7, 8, 4, 5, 6, 2, 3, 9, 3};
    QuickSort testBS;
    testBS.sort(sort);



    return 0;
}