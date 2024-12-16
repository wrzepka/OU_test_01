#include <iostream>

int policz(int a, int b) {
    return a * b; // zamiana dodawania na mnożenie
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "W drugim branch'u 2 * 3 = " <<policz(2,3) <<std::endl;
    return 0;
}
