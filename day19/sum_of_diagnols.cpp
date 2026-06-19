#include <iostream>
using namespace std;

// Write a program to Find diagonal sum.

int main() {
    int mat[10][10] , trans[10][10];
    int rows, cols;

    // Input dimensions of matrix
    cout << "Enter rows and columns of first matrix (max 10): ";
    cin >> rows >> cols;

    if (rows > 10 || cols > 10 || rows <= 0 || cols <= 0 || rows != cols ) {
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

    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if ( i == j  || i+j == rows-1 ){
                sum += mat[i][j];
            }
        }
    }

    cout << "The sum of diagonals is " << sum;

    return 0;

}