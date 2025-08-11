#include<iostream> 
using namespace std;

int main() 
{
  int age;
  cout<<"tell me your age"<<endl;
  cin>>age;
  if(age<18){
    cout<<"you can not come to my party"<<endl;

  }
  else if(age==18){

    cout<<"you will get kid pass"<<endl;

  }
  else{
    cout<<"you can come to party"<<endl;
  }



return 0;
 
}