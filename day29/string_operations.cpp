#include <iostream>
#include <cstring>
using namespace std;

// Write a program to Create Menu Driven String Operations System

int main() {
    char str1[100], str2[100], result[200];
    int choice;

    do {
        cout << "\n===== Menu Driven String Operations =====\n";
        cout << "1. Input Strings\n";
        cout << "2. Display Strings\n";
        cout << "3. String Length\n";
        cout << "4. Copy String\n";
        cout << "5. Concatenate Strings\n";
        cout << "6. Compare Strings\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {

        case 1:
            cout << "Enter first string: ";
            cin.getline(str1, 100);

            cout << "Enter second string: ";
            cin.getline(str2, 100);

            cout << "Strings stored successfully!\n";
            break;

        case 2:
            cout << "First String: " << str1 << endl;
            cout << "Second String: " << str2 << endl;
            break;

        case 3:
            cout << "Length of First String: " << strlen(str1) << endl;
            cout << "Length of Second String: " << strlen(str2) << endl;
            break;

        case 4:
            strcpy(result, str1);
            cout << "Copied String (from str1): " << result << endl;
            break;

        case 5:
            strcpy(result, str1);
            strcat(result, str2);
            cout << "Concatenated String: " << result << endl;
            break;

        case 6:
            if (strcmp(str1, str2) == 0)
                cout << "Strings are Equal.\n";
            else if (strcmp(str1, str2) > 0)
                cout << "First string is greater.\n";
            else
                cout << "Second string is greater.\n";
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