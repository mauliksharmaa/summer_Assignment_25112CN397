#include <iostream>
#include <algorithm>
using namespace std;

// Write a program to Find GCD of two numbers

int main(){
    int n , m;
    cout<<"Enter your first number - ";
    cin>>n;
    cout<<"Enter your second number - ";
    cin>>m;

    if ( m<n ) swap(m,n);

    for ( int i=n; i>0; i--){
        if ( n%i == 0  &&  m%i == 0 ){
            cout<<"The GCD of "<<n<<" and "<<m<<" is "<<i;
            return 0;
        }
    }

}