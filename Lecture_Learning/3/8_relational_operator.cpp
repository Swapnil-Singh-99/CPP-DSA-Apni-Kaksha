#include<iostream>
using namespace std;

// Relational operators are those which defines a relation btw 2 operands
// it returns a boolean value
// ==   - this is true if both operands have equal value
// !=   - this is true if both operands are not equal
// >    - this is true if left operand is more than right operand
// <    - this is true if right operand is more than left operand
// >=   - this is true if left operand is more than and equal to right operand
// <=   - this is true if right operand is more than and equal to left operand
int main(){
    int a,b,c,d;
    a = 1;
    b = 1;
    c = 2;
    d = 2;
    // true bcz a is equals to b
    cout<<(a==b)<<endl;
    // true bcz b is not equals to c
    cout<<(b!=c)<<endl;
    // false bcz a is not greater than c
    cout<<(a>c)<<endl;
    // false bcz c is not less than b
    cout<<(c<b)<<endl;
    // true beacause c is not greater than d but c is eqaul to d (in this only one of the operands has to be true)
    cout<<(c>=d)<<endl;
    // true because a is less than c but a is not equal to c (in this only one of the operands has to be true)
    cout<<(a<=c)<<endl;
}
// true - 1
// false - 0