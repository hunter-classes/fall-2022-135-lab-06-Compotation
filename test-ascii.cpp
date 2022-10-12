#include <iostream>

int main() {
    std::string inputLine;
    std::cout << "Input: ";
    std::getline(std::cin, inputLine);
    for (char inputChar : inputLine) {
        std::cout << inputChar << " " << (int) inputChar << std::endl;
    }
    return 0;
}