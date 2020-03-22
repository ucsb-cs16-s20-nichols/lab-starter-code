#ifndef TDDFUNCS_H
#define TDDFUNCS_H

#include <string>

void assertEquals(std::string expected, 
		  std::string actual, 
		  std::string message);

void assertEquals(int expected, 
		  int actual, 
		  std::string message);

#endif // TDDFUNCS_H
