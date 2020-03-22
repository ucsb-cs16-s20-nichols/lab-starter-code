#include <iostream>
#include <string>
#include <sstream> // for ostringstream
#include <cassert>

#include "arrayFuncs.h"

// intToString converts an int to a string

std::string intToString(int i) {
// creates a stream like cout, cerr that writes to a string
  std::ostringstream oss; 
  oss << i;
  return oss.str(); // return the string result
}

std::string arrayToString(int a[], int size) {

  std::ostringstream oss;
  if (a == 0 ){
    oss << "NULL";
  }else {
    // fencepost problem; first element gets no comma in front
    oss << "{"; 

    if (size>0)
      oss << intToString(a[0]); 

    for (int i=1; i<size; i++) {
      oss << "," << intToString(a[i]);
    }
    oss << "}";
  }
  return oss.str();
  
}

