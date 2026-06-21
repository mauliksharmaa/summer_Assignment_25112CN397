#include <iostream>
using namespace std;

// Write a program to Create ATM simulation.

int main() {
    int balance = 1000;
    int choice, amount;

    do {
        cout << "\n      ATM MENU       \n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Balance: " << balance << endl;
                break;

            case 2:
                cout << "Enter amount: ";
                cin >> amount;
                balance += amount;
                cout << "Deposited!\n";
                break;

            case 3:
                cout << "Enter amount: ";
                cin >> amount;
                if (amount <= balance) {
                    balance -= amount;
                    cout << "Withdraw successful!\n";
                } else {
                    cout << "Insufficient balance!\n";
                }
                break;

            case 4:
                cout << "Exiting ATM...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}