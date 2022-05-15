void reversearray(int arr[], int size){

    int l = 0, r = size - 1, tmp;

    for (int i = l; i <= r/2; i++){
        tmp = arr[i];
        arr[i] = arr[r - i];
        arr[r - i] = tmp;
    }
}



void ptr_reversearray(int *arr, int size){

    int l = 0, r = size - 1, tmp;

    for (int i = l; i <= r / 2; i++){
        tmp = *(arr + i);
        *(arr + i) = *(arr + r - i);
        *(arr + r - i) = tmp;
    }
}
