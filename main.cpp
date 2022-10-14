#include <iostream>


#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
int main() {
    std::cout << encryptCaesar("Way to Go!", 5) << std::endl;
    std::cout << encryptVigenere("holl", "hi");
    return 0;
}
