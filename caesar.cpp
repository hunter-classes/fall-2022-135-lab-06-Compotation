#include <string>
#include "caesar.h"
#include <cctype>

char shiftChar(char c, int rshift) {
    bool isLowerCase = c >= 'a' && c <= 'z';
    if (isLowerCase) {
        int relativePosition = abs(c + rshift - 'a') % 26;
        return (char) ('a' + relativePosition);
    }
    int relativePosition = abs(c + rshift - 'A') % 26;
    return (char) ('A' + relativePosition);
}
std::string encryptCaesar(std::string plaintext, int rshift) {
    std::string encryptedString;
    for (char plainChar : plaintext) {
        if (isalpha(plainChar)) {
            encryptedString += shiftChar(plainChar, rshift);
        } else {
            encryptedString += plainChar;
        }
    }
    return encryptedString;
}
