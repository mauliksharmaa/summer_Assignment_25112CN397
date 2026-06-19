#include <iostream>
using namespace std;

// Write a program to count words.

int main(){
    char str[100];
    int i = 0;
    int words = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    while ( str[i] != '\0' ){
        while (str[i] != '\0' && str[i] == ' '){
            i++;
        }

        if (str[i] != '\0') {
            words++;
        }

        while (str[i] != '\0' && str[i] != ' '){
            i++;
        }
    }

    cout << "Number of words : " << words;
    return 0;
}
