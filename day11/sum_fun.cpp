#include <iostream>
using namespace std;

// Write a program to Write function to find sum of two numbers

int sum ( int a , int b ){
    return a+b;
}

int main (){
    int n , m;
    cout << "Enter first number - ";
    cin >> n;
    cout << "Enter second number - ";
    cin >> m;

    cout << "The sum of given numbers is " << sum(n,m) << "." ;
}

