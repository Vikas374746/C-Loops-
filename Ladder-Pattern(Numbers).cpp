#include <iostream>

int main() {
    int height = 4; 
    int number = 1;

    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << number << " ";
            number++;
        }
        std::cout << std::endl;
    }

    return 0;
}

/* 
Output:
1 
2 3 
4 5 6 
7 8 9 10 
*/
