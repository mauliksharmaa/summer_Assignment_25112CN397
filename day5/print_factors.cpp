#include <iostream>
using namespace std;

// Write a program to Print factors of a number.

int main(){
    int n;
    cout<<"Enter your number (positive integer) - ";
    cin>>n;

    for ( int i=1; i<=n; i++){
        if ( n%i == 0 ){
            cout<<i<<" ";
        }
    }

}