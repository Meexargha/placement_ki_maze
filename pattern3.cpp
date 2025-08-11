/*
1
2 3
3 4 5
4 5 6 7 

*/






#include<iostream>
using namespace std;
int main(){
int a;
 
  cin>>a; // a is denoted as row 


int i = 1;
// int count =1;
while (i<=a)

{
     int b=1;
     int value = i;
     while (b<=i)
     {
        cout<<value;
        value = value + 1;
        b = b+1;

     }
     cout<<endl;
     i=i+1;
     
   
}



}