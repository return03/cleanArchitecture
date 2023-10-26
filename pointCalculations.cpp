#include "point.h"
#include "stdio.h"


 int main(){
  Point myPoint(1,1);
  Point myPoint2(4,4);
  double p;
  
  
  p=myPoint.distance(myPoint2);
  printf("%f",p);

   
};


