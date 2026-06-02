#include <iostream>
using namespace std;

// Write a program to Find x^n without pow().

int main(){
    int p;
    double n;
    cout<<"Enter your number - ";
    cin>>n;
    cout<<"Enter the raised power (natural number) - ";
    cin>>p;


    int res = n;
    for ( int i=0; i<p-1; i++){
        res *= n;

    }

    cout<<n<<" raised to power "<<p<<" is "<<res;


}