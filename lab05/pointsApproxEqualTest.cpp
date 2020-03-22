#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"


int main() {
  struct Point p1,p2;

  p1.x = 6.0;  p1.y = 3.0;
  p2.x = 7.0;  p2.y = 11.0;

  // p1 should be equal to itself
  assertTrue(pointsApproxEqual(p1,p1),"pointsApproxEqual(p1,p1)");

  // p1 and p2 should not be equal: note the ! meaning "not"
  assertFalse(pointsApproxEqual(p1,p2), "pointsApproxEqual(p1,p2)");

  assertFalse(pointsApproxEqual(p2,p1), "assertFalse(pointsApproxEqual(p2,p1))");

}

