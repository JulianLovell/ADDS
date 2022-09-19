int numDup(int arr[], int start, int size, int element) {

    if(start >= size) {
        return 0;
    }

    if(arr[start] == element) {
        return 1 + numDup(arr, start +1, size, element);
    }

    return numDup(arr, start + 1, size, element);

}

#include <iostream>

using namespace std;

int main() {

    int arr[8] = {1, 2, 3, 4, 5, 5, 5, 5};

    cout << numDup(arr, 1, 8, 5) << endl;

    return 0;
}