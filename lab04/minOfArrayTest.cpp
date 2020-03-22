#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {

  int fiveThrees[5]={3,3,3,3,3};
  assertEquals(3,
	       minOfArray(fiveThrees,5),
	       "minOfArray(fiveThrees,5)");
  
  int zeros[3]={0,0,0}; // initializes all elements to 0
  assertEquals(0,
	       minOfArray(zeros,3), 
	       "minOfArray(zeros,3)" );  

  
  int fiveInts[5]={12,3,4,-9,5}; 
  assertEquals(-9,
	       minOfArray(fiveInts,5), 
	       "minOfArray(fiveInts,5)" ); 

  assertEquals(3,
	       minOfArray(fiveInts,2), 
	       "minOfArray(fiveInts,2)" ); 

  assertEquals(3,
	       minOfArray(fiveInts,3), 
	       "minOfArray(fiveInts,3)" ); 

  int meaning[] = {42};
  assertEquals(42,
	       minOfArray(meaning,1), 
	       "minOfArray(meaning,1)" ); 

  int mix[10]={-42,12,-9,56,123,-32767,48}; // last three will be zero
  assertEquals(-32767,
	       minOfArray(mix,10), 
	       "minOfArray(mix,10)" );

  return 0;
}
