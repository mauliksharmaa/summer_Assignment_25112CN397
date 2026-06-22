#include <iostream>
#include <string>
using namespace std;

// Write a program to Create Marksheet Generation System

class Student {
public:
    int rollNo;
    string name;
    float marks[5];
    float total;
    float percentage;
    char grade;
};

int main() {
    Student st[100];
    int n = 0, choice, roll;
    bool found;

    do {
        cout << "\n===== Marksheet Generation System =====\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Marksheet Records\n";
        cout << "3. Search Student by Roll No\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Roll No: ";
            cin >> st[n].rollNo;

            cout << "Enter Student Name: ";
            cin >> st[n].name;

            st[n].total = 0;

            cout << "Enter marks of 5 subjects:\n";
            for (int i = 0; i < 5; i++) {
                cout << "Subject " << i + 1 << ": ";
                cin >> st[n].marks[i];
                st[n].total += st[n].marks[i];
            }

            st[n].percentage = st[n].total / 5;

            if (st[n].percentage >= 75)
                st[n].grade = 'A';
            else if (st[n].percentage >= 60)
                st[n].grade = 'B';
            else if (st[n].percentage >= 40)
                st[n].grade = 'C';
            else
                st[n].grade = 'F';

            n++;
            cout << "Marksheet Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No records available.\n";
            } else {
                cout << "\nMarksheet Records:\n";
                cout << "Roll\tName\tTotal\t%\tGrade\n";

                for (int i = 0; i < n; i++) {
                    cout << st[i].rollNo << "\t"
                         << st[i].name << "\t"
                         << st[i].total << "\t"
                         << st[i].percentage << "\t"
                         << st[i].grade << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Roll No to Search: ";
            cin >> roll;

            found = false;

            for (int i = 0; i < n; i++) {
                if (st[i].rollNo == roll) {
                    cout << "\nStudent Found:\n";
                    cout << "Roll No: " << st[i].rollNo << endl;
                    cout << "Name: " << st[i].name << endl;

                    cout << "Marks: ";
                    for (int j = 0; j < 5; j++) {
                        cout << st[i].marks[j] << " ";
                    }

                    cout << "\nTotal: " << st[i].total << endl;
                    cout << "Percentage: " << st[i].percentage << endl;
                    cout << "Grade: " << st[i].grade << endl;

                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Record Not Found.\n";
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