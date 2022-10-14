CXXFLAGS = -Wall -g

all: main.o caesar.o vigenere.o decrypt.o
	g++ -o main main.o caesar.o vigenere.o decrypt.o

main: main.o caesar.o vigenere.o decrypt.o
	g++ -o main main.o caesar.o vigenere.o decrypt.o

tests: tests.o caesar.o vigenere.o decrypt.o
	g++ -o tests tests.o caesar.o vigenere.o decrypt.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

main.o: main.cpp caesar.h vigenere.o

tests.o: tests.cpp doctest.h caesar.h vigenere.h

test-ascii.o: test-ascii.cpp

caesar.o: caesar.cpp caesar.h

vigenere.o: vigenere.cpp vigenere.h

decrypt.o: decrypt.cpp decrypt.h

clean:
	rm -f main.o tests.o test-ascii.o caesar.o vigenere.o decrypt.o
