#include <iostream>
using namespace std;

// Write a program to Find common elements.

int main() {
    int a[100], b[100];
    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;

    cout << "Enter elements of first array:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;

    cout << "Enter elements of second array:\n";
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    cout << "Common elements are: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                cout << a[i] << " ";
                break;
            }
        }
    }

}