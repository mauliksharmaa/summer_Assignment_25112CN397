#include <iostream>
#include <string>
using namespace std;

// Write a program to Remove duplicate characters.

int main() {
    string s, result = "";
    bool visited[256] = {false};

    cout << "Enter string: ";
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if (visited[(int)ch] == false) {
            result.push_back(ch);
            visited[(int)ch] = true;
        }
    }

    cout << "After removing duplicates: " << result << endl;

    return 0;
}