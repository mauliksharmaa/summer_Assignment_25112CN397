#include <iostream>
#include <string>
using namespace std;

// Write a program to Create employee management system.

class Employee {
public:
    int empID;
    string name;
    float salary;
};

int main() {
    Employee emp[100];
    int n = 0, choice, id;
    bool found;

    do {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter Employee ID: ";
                cin >> emp[n].empID;

                cout << "Enter Employee Name: ";
                cin >> emp[n].name;

                cout << "Enter Salary: ";
                cin >> emp[n].salary;

                n++;
                cout << "Employee Record Added Successfully!\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No employee records available.\n";
                } else {
                    cout << "\nEmployee Records:\n";
                    cout << "ID\tName\tSalary\n";
                    for (int i = 0; i < n; i++) {
                        cout << emp[i].empID << "\t"
                             << emp[i].name << "\t"
                             << emp[i].salary << endl;
                    }
                }
                break;

            case 3:
                cout << "Enter Employee ID to Search: ";
                cin >> id;

                found = false;
                for (int i = 0; i < n; i++) {
                    if (emp[i].empID == id) {
                        cout << "\nEmployee Found:\n";
                        cout << "ID: " << emp[i].empID << endl;
                        cout << "Name: " << emp[i].name << endl;
                        cout << "Salary: " << emp[i].salary << endl;
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Employee Record Not Found.\n";
                }
                break;

            case 4:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice! Try Again.\n";
        }

    } while (choice != 4);

    return 0;
}