#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // the while loop will stop if the value of n is less than 0 means any negative value
    while(n>=0){
        cout<<"You can continue"<<endl;
        cin>>n;
    }
    cout<<"You cannot continue you entered a number less that 0"<<endl;
}