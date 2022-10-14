#include <string>
#include "decrypt.h"
#include "caesar.h"
#include "vigenere.h"

std::string decryptCaesar(std::string ciphertext, int rshift) {
    return encryptCaesar(ciphertext, -1 * rshift);
}

void negateArray(int shifts[], int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        shifts[i] = -1 * shifts[i];
    }
}
std::string decryptVigenere(std::string ciphertext, std::string keyword) {
    // avoid variable length array error
    int shifts[1000];
    calculateShifts(keyword, shifts);
    negateArray(shifts, keyword.size());
    return encryptVigenere(ciphertext, keyword, shifts);
}