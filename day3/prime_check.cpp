#include <iostream>
#include <cmath>
using namespace std;

// Write a program to Check whether a number is prime.

int main(){
    int n;
    cout<<"Enter your number - ";
    cin>>n;

    if ( n==1 ) {
        cout<<"Neither Prime nor Composite";
        return 0;
    }

    for ( int i = 2; i<=(sqrt(n)); i++){
        if ( n%i == 0 ){
            cout<<"Entered number is not prime";
            return 0;
        }
    }

    cout<<"Entered number is prime";


}