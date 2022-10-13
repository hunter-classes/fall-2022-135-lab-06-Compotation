#include <string>
#include "caesar.h"
#include <cctype>

char shiftChar(char c, int rshift) {
    // if isLowerCase false it can be other symbol
    if (!std::isalpha(c)) {
        return c;
    }
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
        encryptedString += shiftChar(plainChar, rshift);
    }
    return encryptedString;
}
