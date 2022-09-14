int numDup(int arr[], int start, int size, int element) {

    if(start >= size) {
        return 0;
    }

    if(arr[start] == element) {
        return 1 + numDup(arr, start +1, size, element);
    }

    return numDup(arr, start + 1, size, element);

}