int _numDup(int arr[], int start, int size, int element, int dup){

    if(start >= size){
        return dup;
    }

    if(arr[start] == element){
        return _numDup(arr, start + 1, size, element, dup + 1);
    }

    return _numDup(arr, start + 1, size, element, dup);
}

int numDup(int arr[], int start, int size, int element){
    return _numDup(arr, start, size, element, 0);
};

