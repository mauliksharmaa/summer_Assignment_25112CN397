#include <iostream>
using namespace std;

// Write a program to Convert decimal to binary.

int main(){
    int n;
    cout<<"Enter your number - ";
    cin>>n;

    int temp = 0;
    int i = n;

    while ( i>0 ){
        temp = temp*10 + i%2;;
        i /= 2;
    }

    int m = 0;
    i = temp;
    while ( i>0 ){
        m = m*10 + i%10;
        i /= 10;
    }

    cout<<"Binary conversion of "<<n<<" is "<<m;



}