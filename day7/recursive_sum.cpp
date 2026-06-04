#include <iostream>
using namespace std;

// Write a program to Recursive sum of digits.

int sumi ( int n ){
    if ( n == 0 ) return 0;
    return ( n%10  +  sumi (n/10));
}

int main(){
    int n;
    cout<<"Enter yout number - ";
    cin>>n;

    cout<<"The sum of digits of "<<n<<" is "<<sumi(n)<<".";




}