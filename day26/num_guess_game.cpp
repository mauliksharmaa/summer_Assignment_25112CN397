#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Write a program to Create number guessing game.

int main() {
    srand(time(0)); // random seed

    int secret = rand() % 100 + 1; // 1 to 100
    int guess;

    cout << "Guess the number (1 to 100)\n";

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secret) {
            cout << "Too high!\n";
        }
        else if (guess < secret) {
            cout << "Too low!\n";
        }
        else {
            cout << "Correct! You won \n";
            break;
        }
    }

    return 0;
}