#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"

TEST_CASE("task b") {
    CHECK(shiftChar(';', 1) == ';');
    CHECK(shiftChar('.', 20) == '.');
    CHECK(shiftChar('a', 1) == 'b');
    CHECK(shiftChar('a', 25) == 'z');
    CHECK(shiftChar('A', 1) == 'B');
    CHECK(shiftChar('A', 25) == 'Z');
    CHECK(shiftChar('a', 0) == 'a');
    CHECK(shiftChar('z', 0) == 'z');
    CHECK(shiftChar('A', 0) == 'A');
    CHECK(shiftChar('z', 2) == 'b');
    CHECK(shiftChar('z', 25) == 'y');
    CHECK(shiftChar('Z', 3) == 'C');
    CHECK(shiftChar('Z', 25) == 'Y');

    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
    CHECK(encryptCaesar("!!!!...____", 20) == "!!!!...____");
    CHECK(encryptCaesar("This is C11", 8) == "Bpqa qa K11");
    CHECK(encryptCaesar("THIS IS PYTHON.", 7) == "AOPZ PZ WFAOVU.");
    CHECK(encryptCaesar("aoweif.c,oijafwoieefawe", 24) == "ymucgd.a,mghydumgccdyuc");
}