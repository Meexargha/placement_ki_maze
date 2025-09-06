#include<iostream>
using namespace std;
void reachhome(int src, int dest){

    //basecase
    if(src==dest){
        cout<<"reached home "<<endl;
        return;
    }
    // processing
    src++;

    //recursive call 
    reachhome(src, dest);

}

int main(){
    int src =1;
    int dest =10;
    cout <<endl;
    reachhome(src, dest);
    return 0;
}