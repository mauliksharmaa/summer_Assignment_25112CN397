#include <iostream>
using namespace std;

// Write a program to Create voting eligibility system.

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote.\n";
    }
    else {
        cout << "You are NOT eligible to vote.\n";
    }

    return 0;
}