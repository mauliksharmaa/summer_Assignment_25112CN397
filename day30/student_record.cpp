#include <iostream>
#include <string>
using namespace std;

// Write a program to Create Student Record System using Arrays and Strings

class Student {
public:
    int rollNo;
    string name;
    string course;
    float marks;
};

int main() {
    Student st[100];
    int n = 0, choice, roll;
    bool found;

    do {
        cout << "\n===== Student Record System =====\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Student by Roll No\n";
        cout << "4. Delete Student Record\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Roll No: ";
            cin >> st[n].rollNo;

            cout << "Enter Name: ";
            cin >> st[n].name;

            cout << "Enter Course: ";
            cin >> st[n].course;

            cout << "Enter Marks: ";
            cin >> st[n].marks;

            n++;
            cout << "Student Record Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No student records available.\n";
            } else {
                cout << "\nStudent Records:\n";
                cout << "Roll\tName\tCourse\tMarks\n";

                for (int i = 0; i < n; i++) {
                    cout << st[i].rollNo << "\t"
                         << st[i].name << "\t"
                         << st[i].course << "\t"
                         << st[i].marks << endl;
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
                    cout << "Course: " << st[i].course << endl;
                    cout << "Marks: " << st[i].marks << endl;

                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student Record Not Found.\n";
            }
            break;

        case 4:
            cout << "Enter Roll No to Delete: ";
            cin >> roll;

            found = false;

            for (int i = 0; i < n; i++) {
                if (st[i].rollNo == roll) {
                    for (int j = i; j < n - 1; j++) {
                        st[j] = st[j + 1];
                    }
                    n--;

                    cout << "Record Deleted Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student Record Not Found.\n";
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