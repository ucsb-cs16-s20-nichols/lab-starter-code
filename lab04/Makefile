CXX = g++
# CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES=arrayToStringTest arrayBoundsDemo countEvensTest \
	minOfArrayTest minOfArrayErrorTest countPrimesTest \
	maxOfArrayTest maxOfArrayErrorTest sumOddsTest \
	sumOfArrayTest utilityTest


all: ${BINARIES}

tests: ${BINARIES}
	./arrayToStringTest
	./countEvensTest
	./countPrimesTest
	./maxOfArrayTest
	./minOfArrayTest
	./sumOddsTest
	./sumOfArrayTest
	./utilityTest

errorTests: minOfArrayErrorTest maxOfArrayErrorTest
	- ./minOfArrayErrorTest
	- ./maxOfArrayErrorTest


arrayToStringTest: arrayToStringTest.o arrayToString.o tddFuncs.o utility.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

minOfArrayTest: minOfArrayTest.o arrayToString.o tddFuncs.o minOfArray.o utility.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

minOfArrayErrorTest: minOfArrayErrorTest.o arrayToString.o tddFuncs.o minOfArray.o utility.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

maxOfArrayTest: maxOfArrayTest.o arrayToString.o tddFuncs.o maxOfArray.o utility.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

maxOfArrayErrorTest: maxOfArrayErrorTest.o arrayToString.o tddFuncs.o maxOfArray.o utility.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

arrayBoundsDemo: arrayBoundsDemo.o arrayToString.o utility.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

countEvensTest: countEvensTest.o countEvens.o tddFuncs.o utility.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

sumOfArrayTest: sumOfArrayTest.o sumOfArray.o tddFuncs.o utility.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@


sumOddsTest: sumOddsTest.o sumOdds.o tddFuncs.o utility.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

countPrimesTest: countPrimesTest.o countPrimes.o tddFuncs.o utility.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

utilityTest: utilityTest.o tddFuncs.o utility.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
