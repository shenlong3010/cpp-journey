#include <iostream>


int main () {
    int factorial;
    std::cout << "Arrange different books, left to right\nHow many books do you want to arrange?\n";
    if (!(std::cin >> factorial)) {
        std::cout << "Please enter only number\n";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    } else {
        if (factorial < 0) return 1;
        else if (factorial == 0 || factorial == 1) factorial = 1;
        else {
            for (int i = factorial - 1; i > 1; --i)
                factorial *= i;
        }
        std::cout << factorial << " different ways to arrange these books " << '\n';
    }
}
