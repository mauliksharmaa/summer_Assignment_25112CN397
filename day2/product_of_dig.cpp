#include <iostream>
using namespace std;

// Write a program to Find product of digits of a number.

int main(){
    int n, i;
    int pro = 1;

    cout<<"Enter your number - ";
    cin>>n;

    if ( n<0 ){
        i = n*(-1);
    }
    else{ 
        i = n;
    }


    while ( i>0 ){
        pro *= i%10;
        i /= 10;
    }

    cout<<"The product of digits of number "<<n<<" is "<<pro;
}