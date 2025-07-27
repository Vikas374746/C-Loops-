#include <iostream>

int main() {
    int height = 5;

    for (int i = 1; i <= height; ++i) {
        // Print leading spaces
        for (int j = 1; j <= height - i; ++j) {
            std::cout << " ";
        }
        // Print asterisks
        for (int k = 1; k <= i; ++k) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}

/* 
Output:
    *
   **
  ***
 ****
*****
*/
