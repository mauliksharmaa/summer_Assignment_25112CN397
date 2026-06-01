#include <iostream>
using namespace std;

// Write a program to Check strong number.

int fac (int a){
    if ( a <= 1 ) return 1;
    return ( a*fac(a-1));
}

int main(){
    int n;
    cout<<"Enter your number (positive integer) - ";
    cin>>n;

    if (n == 0) {
        cout << "Not a strong number";
        return 0;
    }


    int i = n;
    int m = 0;
    while ( i>0 ){
        m += fac ( i%10 );
        i /= 10;
    }

    if ( m == n ){
        cout<<"Yes, the entered number is a strong number";
    }
    else {
        cout<<"No, the entered number is not a strong number";
    }



}