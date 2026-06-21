#include <iostream>
using namespace std;

//Write a program to Find common characters in strings.

int main() {
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    int freq1[256] = {0};

    int freq2[256] = {0};

    for (int i = 0; str1[i] != '\0'; i++) {
        freq1[(unsigned char)str1[i]]++;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        freq2[(unsigned char)str2[i]]++;
    }

    cout << "Common characters: ";
    for (int i = 0; i < 256; i++) {
        if (freq1[i] > 0 && freq2[i] > 0) {
            cout << (char)i;
        }
    }

    return 0;
}