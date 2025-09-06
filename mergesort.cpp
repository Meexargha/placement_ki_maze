#include<iostream>
using namespace std;

//merge function
void merge(int arr[], int start, int end){
    int mid = start + (end-start)/2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int* first = new int[len1];
    int* second = new int[len2];

    int k = start;
    for(int i = 0; i < len1; i++){
        first[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[k];
        k++;
    }

    //merge 
    int index1 = 0;
    int index2 = 0;
    k = start;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[k] = first[index1];
            index1++;
        }
        else{
            arr[k] = second[index2];
            index2++;
        }
        k++;
    }

    while(index1 < len1){
        arr[k] = first[index1];
        index1++;
        k++;
    }

    while(index2 < len2){
        arr[k] = second[index2];
        index2++;
        k++;
    }

    delete [] first;
    delete [] second;
}

void mergesort(int arr[], int start, int end){
    // base case
    if(start >= end){
        return;
    }

    int mid = start + (end-start)/2;

    //left part sort
    mergesort(arr, start, mid);

    //right part sort
    mergesort(arr, mid+1, end);
    
    //merge
    merge(arr, start, end);
}

int main(){
    int arr[5] = {2, 3, 1, 6, 9};
    int n = 5;

    mergesort(arr, 0, n-1);

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
