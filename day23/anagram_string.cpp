#include <iostream>
#include <cstring>
using namespace std;

// Write a program to Check anagram strings.

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    
    if (strlen(str1) != strlen(str2)) {
        cout << "Strings are not anagrams.";
        return 0;
    }

    
    for (int i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]]++;
    }

    
    for (int i = 0; str2[i] != '\0'; i++) {
        freq[(unsigned char)str2[i]]--;
    }

    // checking
    bool isAnagram = true;

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            isAnagram = false;
            break;
        }
    }

    if (isAnagram)
        cout << "Strings are anagrams.";
    else
        cout << "Strings are not anagrams.";


    return 0;


}