#include<iostream>
using namespace std;

bool checkpalindrom(string s, int i, int j){
    if(i>j) return ;
    if(s[i] != s[j])
      return false ;
      else {
        return checkpalindrom(s, i+1, j+1);
      }
}

int main(){

    string  name = "abcdcda";
    


}