#include<iostream>
using namespace std;

int main(){
    int i,j,k,m;

    i = 1;
    //   1     3
    i = i++ + ++i;
    //    4
    cout<<i<<endl;

    i = 1;
    j = 2;
    //  1   2    1    2      3      4
    k = i + j + i++ + j++ + ++i + ++j;
    //    3       4      13
    cout<<i<<" "<<j<<" "<<k<<endl;

    i = 0;
    //  0      0     1    1
    i = i++ - --i + ++i - i--;
    //    0
    cout<<i<<endl;

    i = 1;
    j = 2;
    k = 3;
    //  1     2     3
    m = i-- - j-- - k--;
    //    0       1       2      -4
    cout<<i<<" "<<j<<" "<<k<<" "<<m<<endl;

    i = 10;
    j = 20;
    //  20    19     19     19  19    20    18 
    k = i-- - i++ + --j + --i - j-- + ++i - j++;
    //    10      19      2
    cout<<i<<" "<<j<<" "<<k<<endl;
}