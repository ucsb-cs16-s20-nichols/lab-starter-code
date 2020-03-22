CXX = g++
#CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES= llTests

COMMON_OBJECT_FILES = linkedListFuncs.o moreLinkedListFuncs.o tddFuncs.o

all: ${BINARIES}

tests: ${BINARIES}
	./llTests 1
	./llTests 2
	./llTests 3
	./llTests 4
	./llTests 5
	./llTests 6
	./llTests 7

llTests: llTests.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
