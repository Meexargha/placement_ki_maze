/*#include<iostream>
using namespace std;

int main(){
    int arr[5] = {2,3,4,5,6};
    int target = 3; // Changed target to 5 for clarity
    int n = 5; // Assigning the size of the array to n
    bool flag = false; // Changed 0 to false and 1 to true for clarity

    for(int i = 0; i < n; i++) {
        if (arr[i] == target) {
            flag = true; // Set flag to true if target found
            break;
        }
    }

    if(flag) {
        cout << "Target found" << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}
    */
#include <iostream>
using namespace std;
bool search(int arr[], int size,  int flag)
{
    for(int i=0; i<size; i++){
        if(arr[i]==flag)
        return 1;
    }
    return 0;
}
int main() {
    // Write C++ code here
    int arr[10] = {2,3,4,5,6,7,8,0,-2,-4};
    cout <<"enter the element to search for" <<endl;
    int flag;
    cin >> flag;
    bool found = search(arr, 10, flag);
    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        
        cout<<"key is absent";
    }
    return 0;
}
