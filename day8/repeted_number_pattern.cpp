#include <iostream>
using namespace std;

// Write a program to Print repeated number triangle.

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            cout << i+1 << " ";
        }
        cout << endl;
    }

    return 0;
}