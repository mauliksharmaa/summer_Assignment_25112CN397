#include <iostream>
using namespace std;

// Write a program to Find col-wise sum.

int main() {
    int mat[10][10];
    int rows, cols;

    // Input dimensions of matrix
    cout << "Enter rows and columns of matrix  (max 10): ";
    cin >> rows >> cols;

    if (rows > 10 || cols > 10 || rows <= 0 || cols <= 0) {
        cout << "Invalid matrix size!" << endl;
        return 0;
    }

    // Input matrix
    cout << "Enter elements of matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < cols; i++) {
        int sum = 0;
        for (int j = 0; j < rows; j++) {
            sum += mat[j][i];
        }
        cout << "Sum of column " << i << " is " << sum << endl ;
    }

    return 0;
}