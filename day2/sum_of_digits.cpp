#include <iostream>
using namespace std;

// Write a program to Find sum of digits of a number.

int main(){
    int n, i;
    int sum = 0;

    cout<<"Enter your number - ";
    cin>>n;

    if ( n<0 ){
        i = n*(-1);
    }
    else{ 
        i = n;
    }


    while ( i>0 ){
        sum += i%10;
        i /= 10;
    }

    cout<<"The sum of digits of number "<<n<<" is "<<sum;
}