#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n=5;
    int arr[5];
    
    for(int i=0; i<n; i++)
    {
        cin >>arr[i];
        
        
    }
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+arr[i];
        
        
    }
    cout<<"printing sum" <<sum<<endl;
    
    

    return 0;
}