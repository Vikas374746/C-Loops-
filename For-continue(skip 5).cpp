#include <iostream>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // Skip printing 5
        }
        std::cout << i << std::endl;
    }
    return 0;
}

/*
Output:
1
2
3
4
6
7
8
9
10
*/
