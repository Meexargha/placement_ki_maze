#include<iostream>
using namespace std;
 bool isSorted(int arr[], int size){

    if( size == 0 || size == 1)
    return true;

    if (arr[0]> arr[1])
    return false;
    else{
        bool reamainipart = isSorted(arr+1, size-1);
        return true;

    }
}


int main(){

    int arr[5]= {2,4,5,7,8};
    int size =5;
    bool ans = isSorted(arr,size);
    if(ans){
        cout<< "array is sorted"<<endl;
    }
    else{
        cout<< "array is 69"; 
    }
}