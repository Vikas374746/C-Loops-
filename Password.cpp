#include <iostream>
#include <string>

int main() {
    std::string correctPassword = "123", inputPassword;

    while (true) {
        std::cout << "Enter password: ";
        std::getline(std::cin, inputPassword);

        if (inputPassword == correctPassword) {
            std::cout << "Access granted!\n";
            break;  // Exit loop when password is correct
        } else {
            std::cout << "Access denied! Incorrect password. Try again.\n";
        }
    }

    return 0;
}

/*
Enter password: 231
Access denied! Incorrect password. Try again.
Enter password: 123
Access granted!
*/
