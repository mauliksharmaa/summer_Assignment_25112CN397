#include <iostream>
using namespace std;

// Write a program to Recursive factorial.

int fac ( int n ){
    if ( n<=1 ) return 1;
    return ( n * fac(n-1));
}

int main(){
    int n;
    cout<<"Enter your number - ";
    cin>>n;

    cout<<"The factorial of "<<n<<" is "<<fac(n);


}