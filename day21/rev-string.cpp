#include <iostream>
using namespace std;

// Write a program to Reverse a string.

int main(){
    char str[100];
    int length = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    while (str[length] != '\0') {
        length++;
    }

    for(int i=0; i < length/2; i++ ){
        swap ( str[i] , str[length-i-1] );
    }

    cout << "Reversed string : " << str;

    return 0;
}
