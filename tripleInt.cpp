#include <iostream>

int tripleInt(int num) {
    return num * 3;
}

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    std::cout << "Triple of " << number << " is " << tripleInt(number) << std::endl;
    return 0;
}