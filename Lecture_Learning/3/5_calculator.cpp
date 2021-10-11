#include <iostream>
using namespace std;

int main()
{
    // float because division can come in decimal points
    float n1, n2;
    // this will indicate the sign we input
    char a;
    cin >> n1 >> a >> n2;
    // this is a switch case explained
    switch (a)
    {
    case '+':
        cout << n1 + n2<<endl;
        break;
    case '-':
        cout << n1 - n2<<endl;
        break;
    case '*':
        cout << n1 * n2<<endl;
        break;
    case '/':
        cout << n1 / n2<<endl;
        break;
    // if no case matches then this default statement will execute
    default:
        cout<<"Could not get it!!"<<endl;
        break;
    }
}