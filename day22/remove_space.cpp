#include <iostream>
using namespace std;

// Write a program to Remove spaces from string.

int main(){
    char str[100];
    char ans[100];
    int i = 0;
    int j = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    while ( str[i] != '\0' ){
        while (str[i] != '\0' && str[i] == ' '){
            i++;
        }

        while (str[i] != '\0' && str[i] != ' '){
            ans[j] = str[i];
            j++;
            i++;
        }
    }

    cout << "String without spaces : " << ans;
    return 0;
}