#include<iostream>
using namespace std;

int main(){
    int a,b;
    // input format - a b
    cin>>a>>b;
    if(a>b){
        // loop will go from b+1 to a
        // This is for going through the values btw a and b
        for(int i = b+1 ; i<=a ; i++){
            bool prime = 1;
            // this will check for all numbers whether the number i is prime or not
            for(int j = 2 ; j<i ; j++){
                if(i%j==0){
                    prime = 0;
                    break;
                }
            }
            if(prime){
                cout<<i<<endl;
            }
        }
    }
    if(b>a){
        // this will go from a+1 to b
        // iterate through every value btw a and b
        for(int i = a+1 ; i<=b ; i++){
            bool prime = 1;
            // check whether i is prime or not 
            // if yes then display it
            for(int j = 2 ; j<i ; j++){
                if(i%j==0){
                    prime = 0;
                    break;
                }
            }
            if(prime){
                cout<<i<<endl;
            }
        }
    }
}