#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main()
{
    double a,b,c,d,e;
    scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);
    double average=(a+b+c+d+e)/5;
    if(average>90)printf("A");
    else if(average<=90&&average>75)printf("B");
    else if(average>=60&&average<=75)printf("C");
    else if(average<60)printf("F");
    return 0;
}