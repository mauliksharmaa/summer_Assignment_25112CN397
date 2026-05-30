#include <iostream>
#include <cmath>
using namespace std;

// Write a program to Print prime numbers in a range

int main(){
    int srt,end;
    cout<<"Enter your starting point of range - ";
    cin>>srt;
    cout<<"Enter your ending point of range - ";
    cin>>end;

    if ( srt > end ){
        cout<<"Invalid Range";
    }


    for ( int n = srt; n <= end; n++){
        if ( n<=1 ) continue;
        bool prime = true;

        for ( int i = 2; i<=(sqrt(n)); i++){
            if ( n%i == 0 ){
                prime = false;
                
            }
        }
        if ( prime == true ){
            cout<<n<<" ";
        }
    }



}