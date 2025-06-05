#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
typedef long long LL;
typedef unsigned long long ULL;
typedef unsigned int U;
int main()
{
    double a,b,c,ret;
    scanf("%lf %lf %lf",&a,&b,&c);
    ret =(c-b)/a;
    printf("%.2lf",ret);
    return 0;
}