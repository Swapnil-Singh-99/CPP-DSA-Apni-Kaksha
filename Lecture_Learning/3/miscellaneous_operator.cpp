#include<iostream>
using namespace std;

// Miscellaneous Operators
// sizeof() - returns the size of variable
// Condition?X:Y    - returns the value of X if the condition is true else return the value of Y
// Cast - converts one data type into another
// comma(,)     - causes a sequence of operations to be performed
// &    - returns the address of a variable
// *    - pointer to a variable
int main(){
    int a = 2;
    // this will return 4 as an int is stored in 4 bytes
    cout<<sizeof(a)<<endl;
    a = 10;
    int b = 4;
    // here the value of c becomes a-b means 10-4 as 10 is greater than 4
    int c = (a>b)?a-b:b-a;
    cout<<c<<endl;
    // cast
    float d = 10.5;
    // this changes the value of d 10.5 to 10 into integer
    cout<<int(d)<<endl;
    // comma
    // these comma will assign the last value to d that is 6
    d = (2,5,6);
    cout<<d<<endl;
    // this will tell the memory address of the variable
    cout<<&(d)<<endl;
    // Pointer will be explained in further topics
}