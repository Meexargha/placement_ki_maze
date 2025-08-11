/*
1 2 3 4 5 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

*/
#include<iostream>
using namespace std;
int main(){
int a;
 
  cin>>a; // a is denoted as row 


int i = 1;
while (i<=a)

{
     int b=1;
     while (b<=a)
     {
        cout<<b;
        b=b+1;

     }
     cout<<endl;
     i=i+1;
     
   
}


return 0;

}