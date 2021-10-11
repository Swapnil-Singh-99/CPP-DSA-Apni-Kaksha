#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum;
    sum = 0;
    for(int i = 0 ; i<=n ; i++){
        sum = sum + i;
    }
    cout<<"Sum from 0 till "<<n<<" is "<<sum;
}