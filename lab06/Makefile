CXX = g++
#CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES= mafTest

COMMON_OBJECT_FILES = moreArrayFuncs.o tddFuncs.o arrayFuncs.o

all: ${BINARIES}

tests: ${BINARIES}
	./mafTest

mafTest: mafTest.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
