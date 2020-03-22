/*
/ arrayBoundsDemo.cpp for CS16, UCSB
/ Copyright © 2017 by Diba Mirza, Ziad Matni, Phillip Conrad.
/ All rights reserved.
/ Inspired by an assignment by P.Conrad at UCSB
/
/ This code demonstrates what happens when you pass the "wrong" size
/ for an array to a C++ function. 
/
/ In C++, an array is just a pointer to the starting point; 
/ it is not an "object". There is nothing storing the length.
/ The length must be passed separately, and if you get it wrong,
/ the called function takes what you give it.
/
/ Saying the array is "shorter" than it really is may be ok
/ if you only want to process the first part of the array.
/
/ But saying that it LONGER than it really is can give unpredictable
/ results, and is almost always a logic error.
*/

#include "arrayFuncs.h"
#include "tddFuncs.h"
#include <iostream>
using namespace std;

int main() {

  int fiveThrees[5]={3,3,3,3,3};
  int zeros[3]={0,0,0}; // initializes all elements to 0
  int empty[] = {};
  int primes[] = {2,3,5,7,11,13,17,19,23,29};
  int meaning[] = {42};  
  int mix[10]={-42,12,-9,56,123,32767,48};

  cout << "First, here's some 'correct' output:\n" << endl;

  cout << "arrayToString(fiveThrees,5)=" 
       << arrayToString(fiveThrees,5) << endl;
  cout << "arrayToString(zeros,3)=" 
       << arrayToString(zeros,3) << endl;
  cout << "arrayToString(empty,0)=" 
       << arrayToString(empty,0) << endl;
  cout << "arrayToString(primes,10)=" 
       << arrayToString(primes,10) << endl;
  cout << "arrayToString(meaning,1)=" 
       << arrayToString(meaning,1) << endl;
  cout << "arrayToString(mix,10)=" 
       << arrayToString(mix,10) << endl;

  cout << "\nNow some 'too short' output:\n" << endl;

  cout <<  "   arrayToString(fiveThrees,5)=" 
       <<      arrayToString(fiveThrees,5) << endl
       << "VS. arrayToString(fiveThrees,2)=" 
       <<      arrayToString(fiveThrees,2) << endl;

  cout << "    arrayToString(zeros,3)=" 
       <<      arrayToString(zeros,3) << endl
       << "VS. arrayToString(zeros,1)=" 
       <<      arrayToString(zeros,1) << endl;

  cout << "    arrayToString(primes,10)=" 
       <<      arrayToString(primes,10) << endl
       << "VS. arrayToString(primes,4)=" 
       <<      arrayToString(primes,4) << endl;
    
  cout << "\nNow compare TOO LONG output: \n" << endl;

  cout << "    arrayToString(fiveThrees,5)=" 
       <<      arrayToString(fiveThrees,5)  << endl
       << "VS. arrayToString(fiveThrees,7)=" 
       <<      arrayToString(fiveThrees,7)  << endl;

  cout << "    arrayToString(zeros,3)=" 
       <<      arrayToString(zeros,3)  << endl
       << "VS. arrayToString(zeros,6)=" 
       <<      arrayToString(zeros,6) << endl;

  cout << "    arrayToString(empty,0)=" 
       <<      arrayToString(empty,0)  << endl
       << "VS. arrayToString(empty,4)=" 
       <<      arrayToString(empty,4)  <<  endl;

  cout << "    arrayToString(primes,10)=" 
       <<      arrayToString(primes,10)  << endl
       << "VS. arrayToString(primes,12)=" 
       <<      arrayToString(primes,12)  << endl;

  cout << "    arrayToString(meaning,1)=" 
       <<      arrayToString(meaning,1)  << endl
       << "VS. arrayToString(meaning,2)=" 
       <<      arrayToString(meaning,2)  << endl;
 
  cout << "    arrayToString(mix,10)=" 
       <<      arrayToString(mix,10)  << endl
       << "VS. arrayToString(mix,12)=" 
       <<      arrayToString(mix,12)  << endl;

  return 0;
}
