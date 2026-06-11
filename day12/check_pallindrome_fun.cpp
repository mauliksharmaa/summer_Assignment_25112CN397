#include <iostream>
using namespace std;

// Write a program to Write function for palindrome.

bool isPalindrome(string str)
{
    int start = 0;
    int end = str.length() - 1;

    while (start < end){
        if (str[start] != str[end])
        {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str)){
        cout << str << " is a Palindrome.";
    }
    else{
        cout << str << " is not a Palindrome.";
    }

    return 0;
}