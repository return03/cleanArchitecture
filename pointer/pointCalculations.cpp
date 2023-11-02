#include "point.h"
#include "stdio.h"
#include <iostream>


 int main(){
  Point initPoint(0,0);
  Point myPoint(1,1);
  Point myPoint2(4,4); 
  double p, p1;
  
  
  p=initPoint.distance(myPoint);
  p1=myPoint.distance(myPoint2);
  std::cout<<"p is "<<p<<std::endl;
  std::cout<<"p1 is "<<p1<<std::endl;
   
};


