#include <iostream>
using namespace std;

// Write a program to Print a hollow square.

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            if ( j == 0 || j == rows-1 || i==0 ||i == rows-1 ){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}