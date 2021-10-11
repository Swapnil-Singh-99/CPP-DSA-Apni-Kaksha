#include<iostream>
using namespace std;

// continue - it is used to go to the next iteration of the loop
// break - it is used to break the loop means stop the loop and get out of it
int main(){
    // here the numbers divisible by 3 will not get printed
    for(int i = 0 ; i<=100 ; i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
}