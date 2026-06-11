#include <iostream>
using namespace std;

// Write a program to Print reverse number triangle.

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = rows; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << j+1 <<" ";
        }
        cout << endl;
    }

    return 0;
}