#include <iostream>
using namespace std;

// Write a program to Reverse a string.

bool isPalindrome ( char str1 [] , char str2[], int n ){
    for ( int i = 0; i<n; i++ ){
        if ( str1[i] != str2[i] ) return 0;
    }
    return 1;

}

int main(){
    char str[100];
    int length = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    while (str[length] != '\0') {
        length++;
    }

    char temp[100];

    int i = 0;
    while (str[i] != '\0') {
        temp[i] = str[i];
        i++;
    }
    temp[i] = '\0';

    for(int i=0; i < length/2; i++ ){
        swap ( temp[i] , temp[length-i-1] );
    }

    if (isPalindrome(str,temp,length)){
        cout << "The string is Palindrome";
    }
    else {
        cout << "The string is not a Palidrome";
    }

    return 0;
}
