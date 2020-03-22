#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {

  int fiveThrees[5]={3,3,3,3,3};
  assertEquals( "{3,3,3,3,3}", 
		arrayToString(fiveThrees,5),
		"arrayToString(fiveThrees,5)");

  int zeros[3]={0,0,0}; // initializes all elements to 0
  assertEquals( "{0,0,0}", 
		arrayToString(zeros,3), 
		"arrayToString(zeros,3)" ); 

  int empty[] = {};
  assertEquals( "{}", 
		arrayToString(empty,0), 
		"arrayToString(empty,0)" ); 

  int primes[] = {2,3,5,7,11,13,17,19,23,29};
  assertEquals( "{2,3,5,7,11,13,17,19,23,29}", 
		arrayToString(primes,10), 
		"arrayToString(primes,10)" ); 

  int meaning[] = {42};
  assertEquals( "{42}", 
		arrayToString(meaning,1), 
		"arrayToString(meaning,1)" ); 

  int mix[10]={-42,12,-9,56,123,32767,48}; // last three will be zero
  assertEquals( "{-42,12,-9,56,123,32767,48,0,0,0}",
		arrayToString(mix,10), 
		"arrayToString(mix,10)" );

  return 0;
}
