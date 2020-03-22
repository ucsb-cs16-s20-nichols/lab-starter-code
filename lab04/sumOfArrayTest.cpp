#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {

  int fiveThrees[5]={3,3,3,3,3};
  assertEquals(15,
	       sumOfArray(fiveThrees,5),
	       "sumOfArray(fiveThrees,5)");
  
  int zeros[3]={0,0,0}; // initializes all elements to 0
  assertEquals(0,
	       sumOfArray(zeros,3), 
	       "sumOfArray(zeros,3)" );  

  
  int fiveInts[5]={12,3,4,-9,1}; 
  assertEquals(11,
	       sumOfArray(fiveInts,5), 
	       "sumOfArray(fiveInts,5)" ); 

  assertEquals(19,
	       sumOfArray(fiveInts,3), 
	       "sumOfArray(fiveInts,3)" ); 

  assertEquals(15,
	       sumOfArray(fiveInts,2), 
	       "sumOfArray(fiveInts,2)" ); 

  int meaning[] = {42};
  assertEquals(42,
	       sumOfArray(meaning,1), 
	       "sumOfArray(meaning,1)" ); 

  int mix[10]={-42,12,-9,56,123,-32767,48}; // last three will be zero
  assertEquals(-32579,
	       sumOfArray(mix,10), 
	       "sumOfArray(mix,10)" );

  return 0;
}
