#include<stdio.h>
const double PI=3.1415926535897;
int main()
{ double radius,area,perimeter;
  printf("ÇëÊäÈë°ë¾¶r=");
  scanf("%lf",&radius);
  area=PI*radius*radius;
  perimeter=PI*2*radius;
  
  printf("r=%10f\n",radius);
  printf("S=%10f\n",area);
  printf("C=%10f\n\n",perimeter);
  return 0;
 } 
