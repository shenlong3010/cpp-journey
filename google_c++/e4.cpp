#include <iostream>
#include <time.h>


int generate_rand_num() {
    srand(time(NULL));
    // between 1 and 100
    int secretNum = rand() % 100  + 1;
    return secretNum;
}


int main() {
    int guessNum;
    std::cout << "Guess our number (1 to 100)\n";
    int correctNum = generate_rand_num();
    // input the number and check the number
    while (correctNum != guessNum) {
        if (!(std::cin >> guessNum)) {
            std::cout << "Please enter number only\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        } else {
            if (guessNum == correctNum) {
                std::cout << "You guess the correct number " << guessNum << '\n';
                break;
            } else if (guessNum < correctNum) {
                std::cout << "Your guess is smaller than the random number\n";
            } else {
                std::cout << "Your guess is bigger than the random number\n";
            }
        }
    }
    std::cout << "Random: " << correctNum << '\n';
}

