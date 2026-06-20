#include <iostream>
#include <string>
using namespace std;

// Write a program to Find longest word.

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    string word = "", longest = "";
    int maxLen = 0;

    for (int i = 0; i < s.length(); i++) {

        // if not space, build the word
        if (s[i] != ' ') {
            word += s[i];
        } 
        else {
            // check length of completed word
            if (word.length() > maxLen) {
                maxLen = word.length();
                longest = word;
            }
            word = ""; // reset for next word
        }
    }

    // check last word (important)
    if (word.length() > maxLen) {
        longest = word;
    }

    cout << "Longest word: " << longest << endl;

    return 0;
}