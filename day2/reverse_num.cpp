#include <iostream>
using namespace std;

// Write a program to reverse a number.

int main(){
    int n, m = 0 , i;
    cout<<"Enter your number - ";
    cin>>n;

    bool neg = false;
    if ( n<0 ){
        i = n*(-1);
        neg =  true;
    }
    else{ 
        i = n;
    }

    while ( i>0 ){
        m = m*10 + i%10;
        i /= 10;
    }

    if ( neg == true ){
        m *= (-1);
    }

    cout<<"The reverse of number "<<n<<" is "<<m;


    



}