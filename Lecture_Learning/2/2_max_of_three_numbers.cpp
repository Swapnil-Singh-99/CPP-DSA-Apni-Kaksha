#include<iostream>
using namespace std;

int main(){
    // initializing a,b,c variable
    int a,b,c;
    // getting input from the user and storing it in a b c
    // format of input - 3 6 4
    cin>>a>>b>>c;
    // loop starts
    if(a>b){
        if(a>c){
            cout<<a<<" is the greatest number"<<endl;
        }
        else if(a<c){
            cout<<c<<" is the greatest number"<<endl;
        }
    }
    else if(a<b){
        if(b>c){
            cout<<b<<" is the greatest number";
        }
        else if(b<c){
            cout<<c<<" is the greatest number";
        }
    }
}