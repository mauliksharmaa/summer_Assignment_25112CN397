#include <iostream>
using namespace std;

// Write a program to Print reverse star pattern.

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = rows; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout <<"* ";
        }
        cout << endl;
    }

    return 0;
}