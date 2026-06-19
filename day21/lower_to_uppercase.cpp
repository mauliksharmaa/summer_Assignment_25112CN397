#include <iostream>
using namespace std;

// Write a program to Convert lowercase to uppercase.

int main(){
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // convert to uppercase
        }
        i++;
    }

    cout << "Uppercase string: " << str << endl;

    return 0;

}
