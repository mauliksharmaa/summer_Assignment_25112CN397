#include <iostream>
using namespace std;

// Write a program to Recursive reverse number.

void rev ( int n ){
    if ( n==0 ) return;
    cout<<n%10;
    rev ( n/10);
}

int main(){
    int n;
    cout<<"Enter yout number - ";
    cin>>n;

    rev (n);




}