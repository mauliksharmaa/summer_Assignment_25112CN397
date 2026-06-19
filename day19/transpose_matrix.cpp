#include <iostream>
using namespace std;

// Write a program to Transpose matrix.

int main() {
    int mat[10][10] , trans[10][10];
    int rows, cols;

    // Input dimensions of matrix
    cout << "Enter rows and columns of first matrix (max 10): ";
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

    // display original
    cout << "\nOriginal matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            trans[j][i] = mat[i][j];
        }
    }

    cout << "\nTranspose matrix:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << trans[i][j] << "\t";
        }
        cout << endl;
    }



}