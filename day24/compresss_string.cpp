#include <iostream>
#include <string>
using namespace std;

// Write a program to Compress a string.

string cmpStr(string s) {
    string result = "";
    int n = s.length();

    for (int i = 0; i < n; i++) {
        int count = 1;

        // Count consecutive same characters
        while (i < n - 1 && s[i] == s[i + 1]) {
            count++;
            i++;
        }

        result.push_back(s[i]);
        result += to_string(count);
    }

    return result;
}

int main() {
    string s;

    cout << "Enter string: ";
    cin >> s;

    string compressed = cmpStr(s);

    cout << "Compressed string " << compressed ;

    return 0;
}