#include <iostream>
using namespace std;

// Write a program to check symmetric matrix.

int main() {
    int mat[10][10] , trans[10][10];
    int rows, cols;

    // Input dimensions of matrix
    cout << "Enter rows and columns of (max 10): ";
    cin >> rows >> cols;

    if (rows > 10 || cols > 10 || rows <= 0 || cols <= 0) {
        cout << "Invalid matrix size!" << endl;
        return 0;
    }

    if (rows != cols) {
        cout << "The given matrix is not symmetric";
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

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if ( mat[j][i] != mat[i][j] ){
                cout << "The given matrix is not symmetric";
                return 0;
            }
        }
    }

    cout << "The given matrix is symmetric";
    return 0;




}