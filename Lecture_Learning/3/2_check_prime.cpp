#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool prime = 1;
    // loop will go from 2 to n but will not take n
    for(int i = 2 ; i<n ; i++){
        if(n%i==0){
            cout<<"COMPOSITE"<<endl;
            cout<<i<<endl;
            prime = 0;
            break;
        }
    }
    // will be true if prime is true
    if(prime){
        cout<<"PRIME"<<endl;
    }
}