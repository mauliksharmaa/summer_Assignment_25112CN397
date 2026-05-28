# include <iostream>
using namespace std;


// Write a program to Find factorial of a number.


int main(){
    int n,  fac=1;
    cout<<"Enter the number - ";
    cin>>n;

    for ( int i=1; i<=n; i++){
        fac *= i;
    }
    cout<<"The factorial of "<<n<<" is "<<fac;



}