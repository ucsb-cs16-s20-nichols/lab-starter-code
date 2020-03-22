#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Point p1,p2,p3,p4;
  struct Point p1Expected,p2Expected,p3Expected,p4Expected;

  initPoint(&p1,3.0,4.0);   p1Expected.x = 3.0;    p1Expected.y = 4.0; 
  assertTrue(pointsApproxEqual(p1,p1Expected),"pointsApproxEqual(p1,p1Expected)");

  initPoint(&p2,-1.2,-3.4); p2Expected.x = -1.2;   p2Expected.y = -3.4; 
		   
  assertTrue(pointsApproxEqual(p2,p2Expected), "pointsApproxEqual(p2,p2Expected)");

  initPoint(&p3,0.0,0.0);   p3Expected.x = 0.0;    p3Expected.y = 0.0; 
  assertTrue(pointsApproxEqual(p3,p3Expected),"pointsApproxEqual(p3,p3Expected)");

  initPoint(&p4,0.5,-0.6);  p4Expected.x = 0.5;    p4Expected.y = -0.6; 
  assertTrue(pointsApproxEqual(p4,p4Expected), "pointsApproxEqual(p4,p4Expected)");

  return 0;
}
