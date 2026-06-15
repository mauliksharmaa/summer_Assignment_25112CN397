#include <iostream>
using namespace std;

// Write a program to Find duplicates in array. 

int main() {

    int nums[100];
    int n;

    cout << "Enter size of array - ";
    cin >> n;

    cout << "Enter elements of array" << endl;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Duplicate elements are - ";

    bool found = false;

    for (int i = 0; i < n; i++) {

        bool alreadyPrinted = false;

        // check if already printed
        for (int k = 0; k < i; k++) {
            if (nums[i] == nums[k]) {
                alreadyPrinted = true;
                break;
            }
        }

        if (alreadyPrinted)
            continue;

        // check duplicates
        for (int j = i + 1; j < n; j++) {

            if (nums[i] == nums[j]) {
                cout << nums[i] << " ";
                found = true;
                break;
            }
        }
    }

    if (!found)
        cout << "No duplicates found";

    return 0;
}