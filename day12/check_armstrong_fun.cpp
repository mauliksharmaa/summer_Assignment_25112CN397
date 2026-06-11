#include <iostream>
using namespace std;

// Write a program to Write function to check armstrong.

bool arm ( int n ){int digits = 0;
    int i = n;

    while ( i>0 ){
        digits++;
        i/=10;
    }

    int m = 0;
    i = n;
    while ( i>0 ){

        int p = 1;
        for(int j = 0; j < digits; j++){
            p *= (i % 10);
            }
        m += p;
        i /= 10;
    }


    if ( m == n ){
        return true;
    }
        return false;
}

int main (){
    int n ;
    cout << "Enter number - ";
    cin >> n;

    if ( arm(n) ){
        cout << "The given numbers is armstrong" ;
    }
    else{
        cout << "The given numbers is not armstrong" ;
    }
}

