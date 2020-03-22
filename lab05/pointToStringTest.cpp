#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Point p1,p2;

  initPoint(&p1,3.0,4.0);  
  assertEquals("(3,4)", pointToString(p1), "pointToString(p1)");

  initPoint(&p2,3.14159,6.2831853071);
  assertEquals("(3.14,6.28)", pointToString(p2), "pointToString(p2)");
  assertEquals("(3,6)", pointToString(p2,1), "pointToString(p2,1)");
  assertEquals("(3.142,6.283)", pointToString(p2,4), "pointToString(p2,4)");
  assertEquals("(3.1416,6.2832)", pointToString(p2,5), "pointToString(p2,5)");

		   
  return 0;
}
