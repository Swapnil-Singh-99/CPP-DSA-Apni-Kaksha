#include<iostream>
using namespace std;

// Two types of operators - Binary  |  Unary
// Binary - { + - * / %}
// Unary - { ++ --}
// Logical - { && || ! }
// Bitwise
// ++ is incrementer and -- is decrementer
// these increase and decrease the value by one 

// Now we need to understand about pre and post incrementor and decrementor
// pre  is will increase/decrease the value instantly
// post this will increase/decrease the value before the start of next statement

int main(){
    // Pre Incrementor
    int a,b;
    a = 2;
    b = 5;
    // this will instantly increase the value of b by one store it in a
    // and also it will increase the value of b by one
    a = ++b;
    // here a becomes b+1 and b becomes b
    // a = 6
    // b = 6
    cout<<a<<" "<<b<<endl;
    
    // Post Incrementor
    int c,d;
    c = 3;
    d = 7;
    // this will store the value of d in c 
    // and will increase the value of d by one before the next statement
    c = d++;
    // here c becomes d and d is increased by one
    // c = 7
    // d = 8
    cout<<c<<" "<<d<<endl;
}