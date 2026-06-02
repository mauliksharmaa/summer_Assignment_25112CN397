#include <iostream>
using namespace std;

// Write a program to Count set bits in a number.

int main(){
    int n;
    cout<<"Enter your number - ";
    cin>>n;

    int temp = 0;
    int i = n;

    while ( i>0 ){
        temp +=  i%2;;
        i /= 2;
    }

    cout<<"Number of set bits are "<<temp;


}
