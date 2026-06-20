#include <iostream>
using namespace std;

// Write a program to Find first repeating character

int main() {
    char str[100];
    int freq[256] = {0};
    char ans = '\0' ;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if ( freq[str[i]] > 1 ){
            ans = str[i];
            break;
        }
    }
    
    if ( ans != '\0' ){
        cout << "The first repeating character of string is " << ans;
    }
    else {
        cout<< "There are no repeating characters in the string.";
    }

    return 0;
}