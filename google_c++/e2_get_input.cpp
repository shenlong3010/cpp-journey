// get_input.cpp: Loc Lam
// Description: Illustrate the use of cin to get input

#include <iostream>

int main() {
    int input_var = 0;
    do {
        std::cout << "Enter a number (-1 = quit): ";
        // cin return false if an input operation fails,
        // in our case, when other than an int (the type of input_var) is entered
        if (!(std::cin >> input_var)) {
            std::cout << "You entered a non-numeric. Exiting..." << std::endl;
            // break;
            // recover from error rather than break the program, without using exception handling to prevent overhead
            // std::cin.clear() - clear the error
            // std::cin.ignore() - remove the incorrect characters from the stream
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
        if (input_var != -1)
            std::cout << "You entered " << input_var << std::endl;
        
    } while (input_var != -1);

}   
