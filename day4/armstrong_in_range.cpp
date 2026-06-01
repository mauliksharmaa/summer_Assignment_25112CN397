#include <iostream>
#include <cmath>
using namespace std;

// Write a program to print Armstrong numbers in a range

int main(){
    int srt,end;
    cout<<"Enter your starting point of range - ";
    cin>>srt;
    if ( srt < 0 ){
        cout<<"Starting point cannot be negative";
    }
    cout<<"Enter your ending point of range - ";
    cin>>end;

    if ( srt > end ){
        cout<<"Invalid Range";
    }

    for ( int n = srt; n <= end; n++){

        int digits = 0;
        int i = n;

        while ( i>0 ){
            digits++;
            i/=10;
        }

        int m = 0;
        i = n;
        while ( i>0 ){

            int p = 1;
            for(int j = 0; j < digits; j++){
                p *= (i % 10);
                }
            m += p;
            i /= 10;
        }


        if ( m == n ){
            cout<<n<<" ";
    }



    }



}