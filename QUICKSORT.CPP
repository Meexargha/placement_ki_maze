#include <iostream>
using namespace std;

int partition(int arr[], int starting, int ending) {
    int pivot = arr[starting];
    int cnt = 0;

    // Count elements smaller or equal to pivot
    for (int i = starting + 1; i <= ending; i++) {
        if (arr[i] <= pivot) {
            cnt++;
        }
    }

    // Place pivot at correct position
    int pivotIndex = starting + cnt;
    swap(arr[starting], arr[pivotIndex]);

    int i = starting, j = ending;

    // Partition the array around pivot
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int starting, int ending) {
    if (starting >= ending) return;

    int p = partition(arr, starting, ending);

    quickSort(arr, starting, p - 1);
    quickSort(arr, p + 1, ending);
}

int main() {
    int arr[5] = {2, 4, 1, 6, 9};
    int n = 5;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
