// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int left = 0;
    int right = size - 1;
    int num = 0;
    int mid;
    while (right >= left) {
        mid = (right + left) / 2;
        if (arr[mid] == value) {
            num++;
            break;
        }
        if (arr[mid] < value) {
            left = mid + 1;
        }
        if (arr[mid] > value) {
            right = mid - 1;
        }
    }
    if (num != 0) {
        for (int i = mid + 1; arr[i] == value && i <= size - 1; i++) {
            num++;
        }
        for (int i = mid - 1; arr[i] == value && i >= 0; i--) {
            num++;
        }
    }
    return num;
}
