#ifndef TDDFUNCS_H
#define TDDFUNCS_H

#include <string>

void assertEquals(std::string expected, 
		  std::string actual, 
		  std::string message="");

void assertEquals(int expected, 
		  int actual, 
		  std::string message="");


void assertEquals(double expected, 
		  double actual, 
		  std::string message="",
		  double tolerance=0.0001);

void assertTrue(bool expression, std::string message="");

void assertFalse(bool expression, std::string message="");

#endif // TDDFUNCS_H
