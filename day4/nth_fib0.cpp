#include <iostream>
using namespace std;

// Write a program to Find nth term of Fibonacci series.

int fibo (int n ){
    if ( n<=1 ) return n;

    return ( fibo(n-1) + fibo(n-2) );
}

int main(){
    int n;
    cout<<"Enter n (0 based indexing) - ";
    cin>>n;

    if ( n<0 ) {
        cout<<"Enter a positive integer";
    }

    cout<<"The nth term of series is "<<fibo(n);

}