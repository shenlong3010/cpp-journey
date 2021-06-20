#include <iostream>
#include <fstream> // write and read file
#include <string>


bool isLoggedIn() {
    std::string username, password, un, pw;
    std::cout << "Enter username: ";
    std::cin >> username;
    std::cout<< "Enter password: ";
    std::cin >> password;

    std::ifstream read("data\\" + username + ".txt");
    std::getline(read, un);
    std::getline(read, pw);

    if (un == username && pw == password) return true;
    else return false;
}

int main() {
    int choice;
    std::cout << "1: Register\n2: Login\nYour choice: "; std::cin >> choice;
    if (choice == 1) {
        std::string username, password;
        std::cout << "Select a username: "; std::cin >> username;
        std::cout << "Select a password: "; std::cin >> password;

        std::ofstream file;
        file.open("data\\" + username + ".txt");
        file << username << std::endl << password;
        file.close();

        main();
    } else if (choice == 2) {
        bool status = isLoggedIn();
        if (!status) {
            std::cout << "False Login!" << std::endl;
            system("PAUSE");
            return 0;
        } else {
            std::cout << "Successfully logged in!" << std::endl;
            system("PAUSE");
            return 1;
        }
    }

}

