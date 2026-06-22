#include <iostream>
#include <string>
using namespace std;

// Write a program to Create Contact Management System

class Contact {
public:
    int id;
    string name;
    string phone;
    string email;
};

int main() {
    Contact c[100];
    int n = 0, choice, id;
    bool found;

    do {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display All Contacts\n";
        cout << "3. Search Contact by ID\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Contact ID: ";
            cin >> c[n].id;

            cout << "Enter Name: ";
            cin >> c[n].name;

            cout << "Enter Phone Number: ";
            cin >> c[n].phone;

            cout << "Enter Email: ";
            cin >> c[n].email;

            n++;
            cout << "Contact Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No contact records available.\n";
            } else {
                cout << "\nContact Records:\n";
                cout << "ID\tName\tPhone\tEmail\n";

                for (int i = 0; i < n; i++) {
                    cout << c[i].id << "\t"
                         << c[i].name << "\t"
                         << c[i].phone << "\t"
                         << c[i].email << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Contact ID to Search: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++) {
                if (c[i].id == id) {
                    cout << "\nContact Found:\n";
                    cout << "ID: " << c[i].id << endl;
                    cout << "Name: " << c[i].name << endl;
                    cout << "Phone: " << c[i].phone << endl;
                    cout << "Email: " << c[i].email << endl;

                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Contact Not Found.\n";
            }
            break;

        case 4:
            cout << "Enter Contact ID to Delete: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++) {
                if (c[i].id == id) {
                    for (int j = i; j < n - 1; j++) {
                        c[j] = c[j + 1];
                    }
                    n--;

                    cout << "Contact Deleted Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Contact Not Found.\n";
            }
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