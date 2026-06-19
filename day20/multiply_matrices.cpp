#include <iostream>
using namespace std;

// Write a program to multiply matrices.

int main() {
    int mat1[10][10], mat2[10][10], mul[10][10];
    int rows1, cols1, rows2, cols2;

    // Input dimensions of first matrix
    cout << "Enter rows and columns of first matrix (max 10): ";
    cin >> rows1 >> cols1;

    if (rows1 > 10 || cols1 > 10 || rows1 <= 0 || cols1 <= 0) {
        cout << "Invalid matrix size!" << endl;
        return 0;
    }

    // Input first matrix
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> mat1[i][j];
        }
    }

    // Input dimensions of second matrix
    cout << "\nEnter rows and columns of second matrix (max 10): ";
    cin >> rows2 >> cols2;

    if (rows2 > 10 || cols2 > 10 || rows2 <= 0 || cols2 <= 0) {
        cout << "Invalid matrix size!" << endl;
        return 0;
    }

    // Check compatibility for addition
    if (cols1 != rows2) {
        cout << "Matrix multiplication is not possible." << endl;
        return 0;
    }

    // Input second matrix
    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> mat2[i][j];
        }
    }

    for (int i=0; i<rows1; i++){
        for (int j=0; j<cols2; j++){
            mul[i][j] = 0;
            for (int k=0; k<rows2; k++){
                mul[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Display result
    cout << "\nMultiplication of matrices:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << mul[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}