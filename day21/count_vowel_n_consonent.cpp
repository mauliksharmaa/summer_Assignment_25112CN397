#include <iostream>
using namespace std;

// Write a program to Count vowels and consonants.

int main(){
    char str[100];
    int vowels = 0, consonants = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int i = 0;
     while (str[i] != '\0') {
        char ch = tolower(str[i]);

        if (isalpha(ch)) {  
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }

        i++;
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;

}
