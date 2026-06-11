#include <iostream>
using namespace std;

// Write a program to Write function to check prime.

bool prime ( int a ){
    if ( a<=1 ) return false;
    for ( int i=2; i*i<=a; i++ ){
        if ( a%i == 0 ){
            return false;
        }
        return true;
    }
}

int main (){
    int n ;
    cout << "Enter number - ";
    cin >> n;

    if ( prime(n) ){
        cout << "The given numbers is prime" ;
    }
    else{
        cout << "The given numbers is not prime" ;
    }
}

