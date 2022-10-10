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

    int input;
    vector<int> list;

    while(cin >> input) {
        list.push_back(input);
    }

    QuickSort runQS;
    RecursiveBinarySearch runRBS;

    list = runQS.sort(list);

    cout << boolalpha << runRBS.search(list, 1) << " ";
    printVector(list);

    return 0;
}