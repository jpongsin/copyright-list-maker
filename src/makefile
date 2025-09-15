CC=g++
CXXFLAGS=-std=c++11

CopyrightList: main.o compoundInfo.o movieInfo.o
	$(CC) -o CopyrightList main.o compoundInfo.o movieInfo.o

main.o: main.cpp
	$(CC) -c ${CXXFLAGS} main.cpp

compoundInfo.o: compoundInfo.h compoundInfo.cpp
	$(CC) -c ${CXXFLAGS} compoundInfo.h
	$(CC) -c ${CXXFLAGS} compoundInfo.cpp
	
movieInfo.o: movieInfo.h movieInfo.cpp
	$(CC) -c ${CXXFLAGS} movieInfo.h
	$(CC) -c ${CXXFLAGS} movieInfo.cpp
	
clean:
	rm -rf *.o main
	rm -rf *.h.gch
