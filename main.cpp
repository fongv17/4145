#include <algorithm>
#include <stdio.h>
void mergeSort(int array[], int left, int right);
int main() {

    int array[] = {33, 7, 68, 23, 85, 34, 12, 10};
    int size = sizeof(array) / sizeof(array[0]);

    mergeSort(array, 0, size - 1);
    return 0;

}

void mergeSort(int array[], int left, int right) {
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    mergeSort(array, left, mid);
    mergeSort(array, mid + 1, right);
}
