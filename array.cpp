#include <iostream>
#include <climits> // For INT_MIN and INT_MAX constants

using namespace std;

// Function to find the minimum element of an array
int findMin(int arr[], int n) {
    int min = INT_MAX; // Initialize min to maximum possible integer value

    // Iterate through the array elements
    for (int i = 0; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i]; // Update min if current element is smaller
        }
    }

    return min;
}

// Function to find the maximum element of an array
int findMax(int arr[], int n) {
    int max = INT_MIN; // Initialize max to minimum possible integer value

    // Iterate through the array elements
    for (int i = 0; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if current element is larger
        }
    }

    return max;
}

int main() {
    int arr[] = {5, 3, 8, 1, 9, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Finding minimum and maximum elements
    int min = findMin(arr, n);
    int max = findMax(arr, n);

    cout << "Minimum element of the array: " << min << endl;
    cout << "Maximum element of the array: " << max << endl;

    return 0;
}
