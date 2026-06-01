#include <iostream>
using namespace std;

// Write a program to Generate Fibonacci series.

int main(){
    int n;
    cout<<"Enter number of terms - ";
    cin>>n;
    int a = 0, b = 1, next;

    for ( int i=0; i<n; i++){
        

        cout<<a<<" ";
        next = a+b;
        a = b;
        b = next;
    }



}