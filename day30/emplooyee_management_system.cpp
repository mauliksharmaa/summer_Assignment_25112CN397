#include <iostream>
#include <string>
using namespace std;

// Write a program to Create Mini Employee Management System

class Employee {
public:
    int empID;
    string name;
    string department;
    float salary;
};

int main() {
    Employee emp[100];
    int n = 0, choice, id;
    bool found;

    do {
        cout << "\n===== Mini Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Delete Employee\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Employee ID: ";
            cin >> emp[n].empID;

            cout << "Enter Employee Name: ";
            cin >> emp[n].name;

            cout << "Enter Department: ";
            cin >> emp[n].department;

            cout << "Enter Salary: ";
            cin >> emp[n].salary;

            n++;
            cout << "Employee Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No employee records available.\n";
            } else {
                cout << "\nEmployee List:\n";
                cout << "ID\tName\tDepartment\tSalary\n";

                for (int i = 0; i < n; i++) {
                    cout << emp[i].empID << "\t"
                         << emp[i].name << "\t"
                         << emp[i].department << "\t\t"
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
                    cout << "Department: " << emp[i].department << endl;
                    cout << "Salary: " << emp[i].salary << endl;

                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Employee Not Found.\n";
            }
            break;

        case 4:
            cout << "Enter Employee ID to Delete: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++) {
                if (emp[i].empID == id) {
                    for (int j = i; j < n - 1; j++) {
                        emp[j] = emp[j + 1];
                    }
                    n--;

                    cout << "Employee Deleted Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Employee Not Found.\n";
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