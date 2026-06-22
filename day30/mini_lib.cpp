#include <iostream>
#include <string>
using namespace std;

// Write a program to Create Mini Library System

class Book {
public:
    int bookID;
    string title;
    string author;
    bool isIssued;
};

int main() {
    Book b[100];
    int n = 0, choice, id;
    bool found;

    do {
        cout << "\n===== Mini Library System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book by ID\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Delete Book\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Book ID: ";
            cin >> b[n].bookID;

            cout << "Enter Book Title: ";
            cin >> b[n].title;

            cout << "Enter Author Name: ";
            cin >> b[n].author;

            b[n].isIssued = false;

            n++;
            cout << "Book Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No books available.\n";
            } else {
                cout << "\nBook List:\n";
                cout << "ID\tTitle\tAuthor\tStatus\n";

                for (int i = 0; i < n; i++) {
                    cout << b[i].bookID << "\t"
                         << b[i].title << "\t"
                         << b[i].author << "\t"
                         << (b[i].isIssued ? "Issued" : "Available")
                         << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Book ID to Search: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++) {
                if (b[i].bookID == id) {
                    cout << "\nBook Found:\n";
                    cout << "ID: " << b[i].bookID << endl;
                    cout << "Title: " << b[i].title << endl;
                    cout << "Author: " << b[i].author << endl;
                    cout << "Status: " << (b[i].isIssued ? "Issued" : "Available") << endl;

                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Book Not Found.\n";
            }
            break;

        case 4:
            cout << "Enter Book ID to Issue: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++) {
                if (b[i].bookID == id) {
                    if (!b[i].isIssued) {
                        b[i].isIssued = true;
                        cout << "Book Issued Successfully!\n";
                    } else {
                        cout << "Book already issued.\n";
                    }

                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Book Not Found.\n";
            }
            break;

        case 5:
            cout << "Enter Book ID to Return: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++) {
                if (b[i].bookID == id) {
                    if (b[i].isIssued) {
                        b[i].isIssued = false;
                        cout << "Book Returned Successfully!\n";
                    } else {
                        cout << "Book was not issued.\n";
                    }

                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Book Not Found.\n";
            }
            break;

        case 6:
            cout << "Enter Book ID to Delete: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++) {
                if (b[i].bookID == id) {
                    for (int j = i; j < n - 1; j++) {
                        b[j] = b[j + 1];
                    }
                    n--;

                    cout << "Book Deleted Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Book Not Found.\n";
            }
            break;

        case 7:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice! Try Again.\n";
        }

    } while (choice != 7);

    return 0;
}