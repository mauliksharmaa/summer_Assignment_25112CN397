#include <iostream>
#include <string>
using namespace std;

// Write a program to create Salary Management System

class Employee {
public:
    int empID;
    string name;
    float basicSalary,allowance,deduction,netSalary;
    
};

int main() {
    Employee emp[100];
    int n = 0, choice, id;
    bool found;

    do {
        cout << "\n==== Salary Management System =====\n";
        cout << "1. Add Employee Salary Record\n";
        cout << "2. Display All Salary Records\n";
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

            cout << "Enter Basic Salary: ";
            cin >> emp[n].basicSalary;

            cout << "Enter Allowance: ";
            cin >> emp[n].allowance;

            cout << "Enter Deduction: ";
            cin >> emp[n].deduction;

            emp[n].netSalary = emp[n].basicSalary + emp[n].allowance - emp[n].deduction;

            n++;

            cout << "Salary Record Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No salary records available.\n";
            } 
            else {
                cout << "\nSalary Records:\n";
                cout << "ID\tName\tBasic\tAllowance\tDeduction\tNet Salary\n";

                for (int i = 0; i < n; i++) {
                    cout << emp[i].empID << "\t"
                         << emp[i].name << "\t"
                         << emp[i].basicSalary << "\t"
                         << emp[i].allowance << "\t\t"
                         << emp[i].deduction << "\t\t"
                         << emp[i].netSalary << endl;
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
                    cout << "Basic Salary: " << emp[i].basicSalary << endl;
                    cout << "Allowance: " << emp[i].allowance << endl;
                    cout << "Deduction: " << emp[i].deduction << endl;
                    cout << "Net Salary: " << emp[i].netSalary << endl;

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