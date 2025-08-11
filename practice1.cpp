#include<iostream>
using namespace std;
void printarray(int a[], int n){
     cout << "The reversed array is:- " << endl;
for (int i=0; i<n; i++)
    {
    cout<<a[i] <<" ";
    }
    cout << endl;
}
void reversearray(int a[], int n){

    int p1=0;
    int p2=n-1;
while (p1<p2){

    //swap (arr[i], arr[j]);
    swap (a[p1], a[p2]);

p1++;
p2--;


        }
        printarray(a, n);

}
int main() {
   int n = 5;
   int arr[] = { 5, 4, 3, 2, 1};
   reversearray(arr, n);
   return 0;
}
