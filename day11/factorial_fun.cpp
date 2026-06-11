#include <iostream>
using namespace std;

// Write a program to Write function to find factorial.

int fac ( int a ){
    if ( a < 2 ) return 1;
    return a * fac (a-1);
}

int main(){
    int n ;
    cout << "Enter number - ";
    cin >> n;

    cout << "The sum of given numbers is " << fac(n) << "." ;

}