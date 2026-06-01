#include <iostream>
using namespace std;

// Write a program to Print factors of a number.

bool prime ( int n ){
    if ( n <= 1 ) return false;

    for ( int i=2; i*i <= n; i++){
        if ( n%i == 0 ){
            return false;
        }
    }
    return true;
    
}

int main(){
    int n;
    cout<<"Enter your number (positive integer) - ";
    cin>>n;

    for ( int i=n; i>0 ; i--){
        if ( n%i == 0 ){
            if ( prime(i) ){
                cout<<i;
                break;
            }
        }
    }



}