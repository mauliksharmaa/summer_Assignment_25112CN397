#include<iostream>
using namespace std;

// Write a program to Write function for Fibonacci.

int fibo ( int n ){
    if ( n<2 ) return n;

    return fibo(n-1) + fibo(n-2);
}

int main(){
    int n;
    cout << "Enter value of n - ";
    cin>> n ;

    cout << " The value at nth position is " << fibo( n ); 
}
