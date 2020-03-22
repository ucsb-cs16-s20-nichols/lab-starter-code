#include "utility.h"
#include "tddFuncs.h"

int main() {

  assertEquals(true,isEven(2),"isEven(2)");
  assertEquals(false,isEven(3),"isEven(3)");
  assertEquals(true,isEven(4),"isEven(4)");
  assertEquals(false,isEven(55),"isEven(55)");
  assertEquals(false,isEven(-55),"isEven(-55)");
  assertEquals(true,isEven(-80),"isEven(-80)");


  assertEquals(false,isOdd(2),"isOdd(2)");
  assertEquals(true,isOdd(3),"isOdd(3)");
  assertEquals(false,isOdd(4),"isOdd(4)");
  assertEquals(true,isOdd(55),"isOdd(55)");
  assertEquals(true,isOdd(-55),"isOdd(-55)");
  assertEquals(false,isOdd(-80),"isOdd(-80)");


  assertEquals(true,isPrime(2),"isPrime(2)");
  assertEquals(true,isPrime(3),"isPrime(3)");
  assertEquals(false,isPrime(4),"isPrime(4)");
  assertEquals(false,isPrime(55),"isPrime(55)");
  
  assertEquals(true,isPrime(859),"isPrime(859)");
  assertEquals(false,isPrime(861),"isPrime(861)");
  assertEquals(true,isPrime(863),"isPrime(863)");
					 
  assertEquals(false,isPrime(1337),"isPrime(1337)");
  assertEquals(true,isPrime(1373),"isPrime(1373)");
  assertEquals(false,isPrime(64507),"isPrime(64507)");
  assertEquals(true,isPrime(69997),"isPrime(69997)");

  // Note that negative numbers are, by definition,
  // not Prime.  http://mathforum.org/library/drmath/view/55940.html
  // Same for 0 and 1
  
  assertEquals(false,isPrime(-55),"isPrime(-55)");
  assertEquals(false,isPrime(-80),"isPrime(-80)");
  assertEquals(false,isPrime(0),"isPrime(0)");
  assertEquals(false,isPrime(1),"isPrime(1)");
  
  return 0;
}
