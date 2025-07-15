// 9. Number Guessing Game (while loop + condition) ?

#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    srand(time(0));  // Seed random number
    int secret = rand() % 100 + 1;
    int guess;

    cout << "Guess the number (1 to 100):" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == secret) {
            cout << "Congratulations! You guessed it right!" << endl;
            break;
        } else if (guess < secret) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }
    }

    return 0;
}