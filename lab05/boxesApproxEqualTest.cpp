#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"


int main () {

  // declare seven boxes
  struct Box b0,b1,b2,b3,b4,b5,b6;

  // b0 is our baseline box
  b0.ul.x = 9.8;  b0.ul.y = 7.6;
  b0.width = 5.4;  b0.height = 3.2;

  // b1, b2, b3, and b4 all differ in only one respect from b0

  b1.ul.x = 50.0;  b1.ul.y = 7.6;
  b1.width = 5.4;  b1.height = 3.2;

  b2.ul.x = 9.8;  b2.ul.y = 100.0;
  b2.width = 5.4;  b2.height = 3.2;

  b3.ul.x = 9.8;  b3.ul.y = 7.6;
  b3.width = 200.0;  b3.height = 3.2;

  b4.ul.x = 9.8;  b4.ul.y = 7.6;
  b4.width = 5.4;  b4.height = 400.0;

  // b5 and b6 are different boxes (i.e. different addresses in memory)
  // but their contents are the same.   We should return that they are approx. equal

  b5.ul.x = 1.2;  b5.ul.y = 3.4;
  b5.width = 5.6;  b5.height = 7.8;

  b6.ul.x = 1.2;  b6.ul.y = 3.4;
  b6.width = 5.6;  b6.height = 7.8;

  // Make sure that b0 is equal to itself

  assertTrue(boxesApproxEqual(b0,b0),"boxesApproxEqual(b0,b0)");

  // Now, check that b1 is not equal to b0, both ways:

  assertFalse(boxesApproxEqual(b1,b0),"boxesApproxEqual(b1,b0)");
  assertFalse(boxesApproxEqual(b0,b1),"boxesApproxEqual(b0,b1)");

  
  // Check all the others (one way is probaby enough)

  assertFalse(boxesApproxEqual(b0,b2),"boxesApproxEqual(b0,b2)");
  assertFalse(boxesApproxEqual(b0,b3),"boxesApproxEqual(b0,b3)");
  assertFalse(boxesApproxEqual(b0,b4),"boxesApproxEqual(b0,b4)");

  
  // Now check that b5 and b6 are equal in both directions

  assertTrue(boxesApproxEqual(b5,b6),"boxesApproxEqual(b5,b6)");
  assertTrue(boxesApproxEqual(b6,b5),"boxesApproxEqual(b6,b5)");

  return 0;
}


