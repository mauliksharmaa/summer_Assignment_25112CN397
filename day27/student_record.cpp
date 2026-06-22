#include <iostream>
#include <string>
using namespace std;

// Write a program to Create student record management system.

class Student {
public:
    int rollNo;
    string name;
    float marks;
};

int main() {
    Student s[100];
    int n = 0, choice, roll;
    bool found;

    do {
        cout << "\n===== Student Record Management System =====\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Student by Roll Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter Roll Number: ";
                cin >> s[n].rollNo;

                cout << "Enter Name: ";
                cin >> s[n].name;

                cout << "Enter Marks: ";
                cin >> s[n].marks;

                n++;
                cout << "Record Added Successfully!\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No records available.\n";
                } else {
                    cout << "\nStudent Records:\n";
                    cout << "Roll No\tName\tMarks\n";
                    for (int i = 0; i < n; i++) {
                        cout << s[i].rollNo << "\t"
                             << s[i].name << "\t"
                             << s[i].marks << endl;
                    }
                }
                break;

            case 3:
                cout << "Enter Roll Number to Search: ";
                cin >> roll;

                found = false;
                for (int i = 0; i < n; i++) {
                    if (s[i].rollNo == roll) {
                        cout << "\nRecord Found:\n";
                        cout << "Roll No: " << s[i].rollNo << endl;
                        cout << "Name: " << s[i].name << endl;
                        cout << "Marks: " << s[i].marks << endl;
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Record not found.\n";
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