#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum;
    sum = 0;
    // for loop
    // i will go from 0 to <=n 
    // everytime i++ means i=i+1
    for(int i = 0 ; i<=n ; i++){
        sum = sum + i;
    }
    cout<<"Sum from 0 till "<<n<<" is "<<sum;
}