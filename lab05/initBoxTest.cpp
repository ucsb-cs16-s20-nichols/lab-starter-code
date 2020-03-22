#include "shapes.h"
#include "tddFuncs.h"
#include "shapeFuncs.h"
#include "utility.h"


int main()
{
  struct Box b1,b2;
  struct Box b1Expected,b2Expected;

  initBox(&b1,1.2,3.4,5.6,7.8); 
  b1Expected.ul.x = 1.2;  b1Expected.ul.y = 3.4;
  b1Expected.width = 5.6;  b1Expected.height = 7.8;
  assertTrue(boxesApproxEqual(b1,b1Expected),"boxesApproxEqual(b1,b1Expected)");

  initBox(&b2, 9.8, 7.6, 5.4, 3.2); 
  b2Expected.ul.x = 9.8;  b2Expected.ul.y = 7.6;
  b2Expected.width = 5.4;  b2Expected.height = 3.2;
  assertTrue(boxesApproxEqual(b2,b2Expected),"boxesApproxEqual(b2,b2Expected)");

  assertFalse(boxesApproxEqual(b1,b2),"boxesApproxEqual(b1,b2)");
  
  return 0;
}

