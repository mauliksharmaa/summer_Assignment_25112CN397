#include<iostream>
using namespace std;

// Write a program to Write function for perfect number.

bool perfect ( int n ){
    int m = 0;

    for (int i=1; i<=n/2; i++ ){
        if ( n%i == 0 ) m += i; 
    }

    if ( m==n ) return true ;
    return false;
}

int main(){
    int n;
    cout << "Enter any positive number - ";
    cin>> n ;

    if ( perfect(n) ){
        cout << "The given numbers is perfect" ;
    }
    else{
        cout << "The given numbers is not perfect" ;
    }
}