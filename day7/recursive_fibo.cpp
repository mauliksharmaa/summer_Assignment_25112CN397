#include <iostream>
using namespace std;

// Write a program to Recursive Fibonacci.

int fibo ( int n ){
    if ( n == 0 ) return 0;
    if ( n == 1 ) return 1;
    return ( fibo(n-1)+ fibo(n-2));
}

int main(){
    int n;
    cout<<"Enter position (0 based indexing) - ";
    cin>>n;

    cout<<"The Fibonacci number at position "<<n<<" is "<<fibo(n);

}