#include <iostream>
using namespace std;

// Write a program to Sort names alphabetically.

int main() {
    int n;
    cout << "Enter number of names: ";
    cin >> n;

    string names[100]; // string ki array

    cout << "Enter names:\n";
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    // Bubble Sort typaa
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (names[j] > names[j + 1]) {
                swap(names[j], names[j + 1]);
            }
        }
    }

    cout << "Sorted names:\n";


    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}