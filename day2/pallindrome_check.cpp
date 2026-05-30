#include <iostream>
using namespace std;

// Write a program to Check whether a number is palindrome.

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

    if ( n==m ){
        cout<< "The number is a pallindrome.";
    }
    else{
        cout<< "The number is not a pallindrome.";
    }


}