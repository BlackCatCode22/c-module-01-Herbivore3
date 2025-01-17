#include <iostream>

int doubleInt(int num) {
    return num * 2;
}

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    std::cout << "Double of " << number << " is " << doubleInt(number) << std::endl;
    return 3;
    }
    