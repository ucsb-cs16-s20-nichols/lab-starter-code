#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {

  int fiveThrees[5]={3,3,3,3,3};
  assertEquals(0,
	       countEvens(fiveThrees,5),
	       "countEvens(fiveThrees,5)");
  
  int zeros[3]={0,0,0}; // initializes all elements to 0
  assertEquals(3,
	       countEvens(zeros,3), 
	       "countEvens(zeros,3)" );  

  
  int fiveInts[5]={1,2,3,4,5}; 
  assertEquals(2,
	       countEvens(fiveInts,5), 
	       "countEvens(fiveInts,5)" ); 

  int empty[] = {};
  assertEquals(0,
	       countEvens(empty,0), 
	       "countEvens(empty,0)" ); 

  int primes[] = {2,3,5,7,11,13,17,19,23,29};
  assertEquals(1,
	       countEvens(primes,10), 
	       "countEvens(primes,10)" ); 

  int meaning[] = {42};
  assertEquals(1,
	       countEvens(meaning,1), 
	       "countEvens(meaning,1)" ); 

  int mix[10]={-42,12,-9,56,123,32767,48}; // last three will be zero
  assertEquals(7,
	       countEvens(mix,10), 
	       "countEvens(mix,10)" );

  return 0;
}
