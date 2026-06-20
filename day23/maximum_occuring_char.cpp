#include <iostream>
using namespace std;

// Write a program to Find maximum repeating character

int main() {
    char str[100];
    int freq[256] = {0};
    char ans = '\0' ;
    int mf = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if ( freq[str[i]] > mf ){
            ans = str[i];
            mf = freq[str[i]];
        }
    }
    
    
    cout << "The maximum repeating character of string is " << ans;
    

    return 0;
}