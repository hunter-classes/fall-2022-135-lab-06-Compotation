#pragma once

int getShift(char letter);
void calculateShifts(std::string keyword, int shifts[]);
std::string encryptVigenere(std::string plaintext, std::string keyword);