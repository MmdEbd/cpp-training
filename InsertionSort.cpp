#include <iostream>

using namespace std;

void insertionSort(int array[], int size) {
    for (int j = 1; j < size; j++) {
        int key = array[j];
        int i = j - 1;
        while (i >= 0 && array[i] > key) {
            array[i + 1] = array[i];
            i--;
        }
        array[i + 1] = key;
    }
}

int main() {
    int arr[] = {4, 2, 9, 6, 23, 12, 34, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, size);

    cout << "Sorted Array:";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
