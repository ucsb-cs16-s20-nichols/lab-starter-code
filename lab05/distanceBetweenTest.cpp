#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"

int main() {
  struct Point p1,p2,p3,p4,p5;

  p1.x = 6.0;  p1.y = 3.0;
  p2.x = 7.0;  p2.y = 11.0;
  p3.x = 0.0;  p3.y = 0.0;
  p4.x = 3.0;  p4.y = 0.0;
  p5.x = 3.0;  p5.y = 4.0;
		 
  assertEquals(8.0623, distanceBetween(p1,p2),"distanceBetween(p1,p2)");
  assertEquals(8.0623, distanceBetween(p2,p1),"distanceBetween(p2,p1)");

  // These three points should form a 3,4,5 triangle

  assertEquals(3.0, distanceBetween(p3,p4),"distanceBetween(p3,p4)");
  assertEquals(4.0, distanceBetween(p4,p5),"distanceBetween(p4,p5)");
  assertEquals(5.0, distanceBetween(p5,p3),"distanceBetween(p5,p3)");
  

  return 0;
}
