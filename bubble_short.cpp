#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {  // Number of passes
        for (int j = 0; j < n - i - 1; j++) {  // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {  // Swap if needed
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 2, 9, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sorting: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "After Sorting: ";
    printArray(arr, n);

    return 0;
}
