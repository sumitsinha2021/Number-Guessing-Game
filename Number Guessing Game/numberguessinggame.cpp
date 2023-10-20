#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
 {

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int lowerBound = 1;    // Define the lower bound of the range
    int upperBound = 100;  // Define the upper bound of the range
    int secretNumber = rand() % (upperBound - lowerBound + 1) + lowerBound; // Generate a random number in the specified range

    int attempts = 0;
    int guess;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have selected a number between " << lowerBound << " and " << upperBound << ". Try to guess it." << std::endl;

    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You've guessed the number in " << attempts << " attempts." << std::endl;
            break;
        }
    }

    return 0;
}
