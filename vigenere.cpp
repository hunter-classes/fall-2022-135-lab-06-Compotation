#include <string>
#include "vigenere.h"
#include "caesar.h"

int getShift(char letter) {
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    return alphabet.find(letter);
}

void calculateShifts(std::string keyword, int shifts[]) {
    for (int i = 0; i < keyword.size(); i++) {
        shifts[i] = getShift(keyword[i]);
    }
}

std::string encryptVigenere(std::string plaintext, std::string keyword) {
    int shifts[keyword.size()];
    calculateShifts(keyword, shifts);
    std::string result = "";
    int letterCounter = 0;
    for (char c : plaintext) {
        result += shiftChar(c, shifts[letterCounter % keyword.size()]);
        if (std::isalpha(c)) {
            letterCounter++;
        }
    }
    return result;
}
