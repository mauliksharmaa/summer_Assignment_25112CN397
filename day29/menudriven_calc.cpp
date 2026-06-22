#include <iostream>
using namespace std;

// Write a program to Create Menu Driven Calculator

int main() {
    int choice;
    float a, b;

    do {
        cout << "\n===== Menu Driven Calculator =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch (choice) {

        case 1:
            cout << "Result = " << (a + b) << endl;
            break;

        case 2:
            cout << "Result = " << (a - b) << endl;
            break;

        case 3:
            cout << "Result = " << (a * b) << endl;
            break;

        case 4:
            if (b != 0)
                cout << "Result = " << (a / b) << endl;
            else
                cout << "Error: Division by zero not allowed!\n";
            break;

        case 5:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice! Try Again.\n";
        }

    } while (choice != 5);

    return 0;
}