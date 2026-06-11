# include <iostream>
using namespace std;

// Write a program to Print character pyramid.

int main (){
    int n;
    cout << "Enter number of rows - ";
    cin >> n;

    for ( int i=0; i<n; i++){
        for ( int j=0; j<= n-1-i; j++){
            cout << "  ";
        }
        for ( int j=0; j<=i; j++ ){
            cout << char(j+65) << " ";
        }

        for ( int j=0; j<i; j++ ){
            cout << char(i-j+64) << " ";
        }
        cout << endl;
    }
}