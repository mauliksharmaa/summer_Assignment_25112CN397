#include <iostream>
using namespace std;

// Write a program to Write function to find maximum.

int maxi ( int a, int b, int c){
    if ( a>b && a>c) return a;
    if ( b>a && b>c) return b;
    return c;
}

int main (){
    int n , m , o;
    cout << "Enter first number - ";
    cin >> n;
    cout << "Enter second number - ";
    cin >> m;
    cout << "Enter third number - ";
    cin >> o;

    cout << "The largest of given numbers is " << maxi(n,m,o) << "." ;
}