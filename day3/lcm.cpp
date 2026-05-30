#include <iostream>
#include <algorithm>
using namespace std;

// Write a program to Find LCM of two numbers.

int main(){
    int n , m;
    cout<<"Enter your first number - ";
    cin>>n;
    cout<<"Enter your second number - ";
    cin>>m;

    if ( n<m ) swap (m,n);


    int i = n;
    while ( i%m != 0 ){
        i += n;
    }

    cout<<"The LCM of "<<n<<" and "<<m<<" is "<<i;


}