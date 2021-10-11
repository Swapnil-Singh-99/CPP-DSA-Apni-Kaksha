#include<iostream>
using namespace std;

// Assignment Operators
// =    - this equal the values
// +=   - this add the value to the value itself
// -=   - this substracts the value to the value itself
// *=   - this multiplies the value to the value itself
// /=   - this divides the value to the value itself
int main(){
    int a = 6;
    int b = 3;
    // this will make a equal to b
    // value to a changes from 6 to 3
    a=b;
    //    3
    cout<<a<<endl;

    a = 6;
    b = 3;
    // this adds b to the value of a and stores in a
    a+=b;
    //    9
    cout<<a<<endl;

    a = 6;
    b = 3;
    // this substracts b to the value of a and stores it in a
    a-=b;
    //    3
    cout<<a<<endl;

    a = 6;
    b = 3;
    // this multiplies b to the value of a and stores in a
    a*=b;
    //   18
    cout<<a<<endl;

    a = 6;
    b = 3;
    // this divided b to the value of a and stores in a
    a/=b;
    //    2
    cout<<a<<endl;
}