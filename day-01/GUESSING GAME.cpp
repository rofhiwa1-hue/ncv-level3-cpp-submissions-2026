#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
    std::srand(std::time(nullptr)); // Seed random number generator
    int secretNumber = std::rand() % 20 + 1; // Random number from 1 to 20
    int guess;
    std::cout << "Guess the number between 1 and 20.\n";
    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        if (guess == secretNumber) {
            std::cout << "Congratulations! You've guessed the correct number.\n";
            break;
        }
        else if (std::abs(guess - secretNumber) <= 2) {
            std::cout << "You are warm.\n";
        }
        else {
            std::cout << "You are cold.\n";
        }
    }
    return 0;
}
