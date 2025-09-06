#include<iostream>
using namespace std;
void saydigit(int n , string arr[]){
    if(n==0)return ;//base case
    int digit = n%10; //taking digit
    n =n / 10;
    cout <<arr[digit] <<" ";
    saydigit(n, arr);
}



int main(){
    string arr[10] = {"zero","one","two","three","four","five","six", "seven","eight","nine"};
int n;
cin>>n;
saydigit(n, arr);

}