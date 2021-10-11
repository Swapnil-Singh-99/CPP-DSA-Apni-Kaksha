#include<iostream>
using namespace std;

// Logical Operation are those which are used to connect multiple conditions/expressions together or to reverse logicial value
// &&   - AND gives us true if both operands are true
// ||   - OR gives us true if atleast one of the operands is true
// !    - NOT give the opposite logical value of the operand
int main(){
    bool T = 1;
    bool F = 0;
    // &&
    // false bcz in AND both has to be true for true result
    cout<<(T&&F)<<endl;
    // ||
    // true bcz in OR atleast one operand should be true for true result
    cout<<(T||F)<<endl;
    // !
    // false as NOT changes the bool to opposite value
    // true to flase
    // false to true
    cout<<(!T)<<endl;
}