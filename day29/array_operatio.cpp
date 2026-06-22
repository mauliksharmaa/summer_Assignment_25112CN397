#include <iostream>
using namespace std;

// Write a program to Create Menu Driven Array Operations System

int main() {
    int arr[100], n = 0, choice, value, pos, i;

    do {
        cout << "\n===== Menu Driven Array Operations =====\n";
        cout << "1. Insert Element\n";
        cout << "2. Display Array\n";
        cout << "3. Search Element\n";
        cout << "4. Delete Element\n";
        cout << "5. Update Element\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter value to insert: ";
            cin >> value;

            if (n < 100) {
                arr[n] = value;
                n++;
                cout << "Element inserted successfully!\n";
            } else {
                cout << "Array is full!\n";
            }
            break;

        case 2:
            if (n == 0) {
                cout << "Array is empty.\n";
            } else {
                cout << "Array Elements: ";
                for (i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
            break;

        case 3:
            cout << "Enter element to search: ";
            cin >> value;

            pos = -1;
            for (i = 0; i < n; i++) {
                if (arr[i] == value) {
                    pos = i;
                    break;
                }
            }

            if (pos != -1)
                cout << "Element found at position " << pos << endl;
            else
                cout << "Element not found.\n";
            break;

        case 4:
            cout << "Enter element to delete: ";
            cin >> value;

            pos = -1;
            for (i = 0; i < n; i++) {
                if (arr[i] == value) {
                    pos = i;
                    break;
                }
            }

            if (pos != -1) {
                for (i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                cout << "Element deleted successfully!\n";
            } else {
                cout << "Element not found.\n";
            }
            break;

        case 5:
            cout << "Enter position to update (0 to " << n - 1 << "): ";
            cin >> pos;

            if (pos >= 0 && pos < n) {
                cout << "Enter new value: ";
                cin >> arr[pos];
                cout << "Element updated successfully!\n";
            } else {
                cout << "Invalid position!\n";
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