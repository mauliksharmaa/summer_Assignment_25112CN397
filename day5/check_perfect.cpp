#include <iostream>
#include <cmath>
using namespace std;

// Write a program to Check perfect number.

int main(){
    int n;
    cout<<"Enter your number (positive integer) - ";
    cin>>n;

    int m = 0;

    for ( int i=1; i<= n/2; i++ ){
        if ( (n%i == 0) ){
            m += i;
        }
    }

    if ( m == n ){
        cout<<"Yes, the entered number is a perfect number";
    }
    else {
        cout<<"No, the entered number is not a perfect number";
    }


}

