#include<iostream>
using namespace std;

int main(){
    int n;
    // do these statement till the while statement is true
    do{
        cin>>n;
        cout<<"You can continue"<<endl;
    }while(n>=0);
    cout<<"You cannot continue you entered a number less that 0"<<endl;
}