CXXFLAGS = -Wall -g

all: main.o caesar.o vigenere.o
	g++ -o main main.o caesar.o vigenere.o

main: main.o caesar.o vigenere.o
	g++ -o main main.o caesar.o vigenere.o

tests: tests.o caesar.o vigenere.o
	g++ -o tests tests.o caesar.o vigenere.o

test-ascii: test-ascii.o
	g++ -o tests-ascii test-ascii.o

main.o: main.cpp caesar.h vigenere.o

tests.o: tests.cpp doctest.h caesar.h vigenere.o

test-ascii.o: test-ascii.cpp

caesar.o: caesar.cpp caesar.h

clean:
	rm -f main.o tests.o test-ascii.o caesar.o vigenere.o
