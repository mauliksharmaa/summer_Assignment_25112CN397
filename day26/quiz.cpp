#include <iostream>
using namespace std;

//Write a program to Create quiz application.

int main() {
    int score = 0;
    int ans;

    cout << " QUIZ APPLICATION \n";

    
    cout << "\n1. Capital of India?\n";
    cout << "1) Mumbai  2) Delhi  3) Kolkata  4) Chennai\n";
    cout << "Your answer: ";
    cin >> ans;

    if (ans == 2) {
        score++;
    }

    cout << "\n2. 2 + 2 = ?\n";
    cout << "1) 3  2) 4  3) 5  4) 6\n";
    cout << "Your answer: ";
    cin >> ans;

    if (ans == 2) {
        score++;
    }

    cout << "\n3. Which is a programming language?\n";
    cout << "1) HTML  2) HTTP  3) C++  4) DNS\n";
    cout << "Your answer: ";
    cin >> ans;

    if (ans == 3) {
        score++;
    }

    // Resultz
    cout << "\n===== RESULT =====\n";
    cout << "Your score: " << score << "/3\n";

    if (score == 3)
        cout << "perfecto  !\n";
    else if (score == 2)
        cout << "Good job!\n";
    else
        cout << "Try again!n";

    return 0;
}