#include "tddFuncs.h"
#include <iostream>
using std::cout;
using std::endl;


void assertEquals(std::string expected, 
		  std::string actual, 
		  std::string message="") {
  if (expected==actual) {
    cout << "PASSED: " << message << endl;;
  } else {
    cout << "   FAILED: " << message << endl 
	 << "   Expected:[\n" 
	 << expected << "] actual = [\n" 
	 << actual << "]\n" << endl;
  }
}

void assertEquals(int expected, 
		  int actual, 
		  std::string message="") {
  if (expected==actual) {
    cout << "PASSED: " << message << endl;;
  } else {
    cout << "   FAILED: " << message << endl 
	 << "     Expected: " << expected << " Actual: " << actual << endl; 
  }
}

