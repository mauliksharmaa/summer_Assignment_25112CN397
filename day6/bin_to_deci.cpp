#include <iostream>
#include <cmath>
using namespace std;

// Write a program to Convert binary to decimal.

int main(){
    int n;
    cout<<"Enter your number - ";
    cin>>n;

    int i = n;
    int base = 1;
    while ( i>0 ){
        if ( i%10 != 0  && i%10 !=1 ){
            cout<<"Entered number is not binary";
            return 0;
        }
        i /= 10;
    }

    i = n;
    int c = 0;
    int m = 0;

    while ( i>0 ){
        m += (i%10)*base;
        c++;
        base *= 2;
        i /= 10;
    }

    cout<<"Decimal conversion of "<<n<<" is "<<m;




}