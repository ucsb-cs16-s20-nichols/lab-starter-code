#include "tddFuncs.h"
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;


void assertEquals(std::string expected, 
		  std::string actual, 
		  std::string message) {
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
		  std::string message) {
  if (expected==actual) {
    cout << "PASSED: " << message << endl;;
  } else {
    cout << "   FAILED: " << message << endl 
	 << "     Expected: " << expected << " Actual: " << actual << endl; 
  }
}

void assertEquals(double expected, 
		  double actual, 
		  std::string message,
		  double tolerance) {
  if (fabs(expected-actual)<tolerance) {
    cout << "PASSED: " << message << endl;;
  } else {
    cout << "   FAILED: " << message << endl 
	 << "     Expected: " << expected << " Actual: " << actual << endl; 
  }
}

void assertTrue(bool expression,
		  std::string message) {

  if (expression) {
    cout << "PASSED: " << message << endl;;
  } else {
    cout << "   FAILED: " << message << endl 
	 << "     Expected expression to be true but was false" << endl; 
  }
}

void assertFalse(bool expression,
		  std::string message) {

  if (!expression) {
    cout << "PASSED: " << message << endl;;
  } else {
    cout << "   FAILED: " << message << endl 
	 << "     Expected expression to be false but was true" << endl; 
  }
}


