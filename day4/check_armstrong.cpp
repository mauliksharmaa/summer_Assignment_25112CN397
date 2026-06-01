#include <iostream>
#include <cmath>
using namespace std;

// Write a program to Check Armstrong number.

int main(){
    int n;
    cout<<"Enter your number (positive integer) - ";
    cin>>n;

    int digits = 0;
    int i = n;

    while ( i>0 ){
        digits++;
        i/=10;
    }

    int m = 0;
    i = n;
    while ( i>0 ){

        int p = 1;
        for(int j = 0; j < digits; j++){
            p *= (i % 10);
            }
        m += p;
        i /= 10;
    }


    if ( m == n ){
        cout<<"Yes, the entered number is an Armstrong number";
    }
    else {
        cout<<"No, the entered number is not an Armstrong number";
    }

    



}