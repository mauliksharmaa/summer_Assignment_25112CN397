#include <iostream>
#include <string>
using namespace std;

// Write a program to Create Bank Account Management System

class Account {
public:
    int accNo;
    string name;
    float balance;
};

int main() {
    Account acc[100];
    int n = 0, choice, id;
    bool found;
    float amount;

    do {
        cout << "\n===== Bank Account Management System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Display All Accounts\n";
        cout << "3. Search Account by Account No\n";
        cout << "4. Deposit Money\n";
        cout << "5. Withdraw Money\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Account Number: ";
            cin >> acc[n].accNo;

            cout << "Enter Account Holder Name: ";
            cin >> acc[n].name;

            cout << "Enter Initial Balance: ";
            cin >> acc[n].balance;

            n++;
            cout << "Account Created Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No account records available.\n";
            } else {
                cout << "\nAccount Records:\n";
                cout << "AccNo\tName\tBalance\n";

                for (int i = 0; i < n; i++) {
                    cout << acc[i].accNo << "\t"
                         << acc[i].name << "\t"
                         << acc[i].balance << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Account Number to Search: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++) {
                if (acc[i].accNo == id) {
                    cout << "\nAccount Found:\n";
                    cout << "Account No: " << acc[i].accNo << endl;
                    cout << "Name: " << acc[i].name << endl;
                    cout << "Balance: " << acc[i].balance << endl;

                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Account Not Found.\n";
            }
            break;

        case 4:
            cout << "Enter Account Number: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++) {
                if (acc[i].accNo == id) {
                    cout << "Enter Deposit Amount: ";
                    cin >> amount;

                    if (amount > 0) {
                        acc[i].balance += amount;
                        cout << "Amount Deposited Successfully!\n";
                    } else {
                        cout << "Invalid Amount!\n";
                    }

                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Account Not Found.\n";
            }
            break;

        case 5:
            cout << "Enter Account Number: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++) {
                if (acc[i].accNo == id) {
                    cout << "Enter Withdrawal Amount: ";
                    cin >> amount;

                    if (amount > 0 && amount <= acc[i].balance) {
                        acc[i].balance -= amount;
                        cout << "Amount Withdrawn Successfully!\n";
                    } else {
                        cout << "Insufficient Balance or Invalid Amount!\n";
                    }

                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Account Not Found.\n";
            }
            break;

        case 6:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice! Try Again.\n";
        }

    } while (choice != 6);

    return 0;
}