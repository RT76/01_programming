#include <stdio.h>
#include <math.h>
int main()
{
    double x, y, z, s, t1, t2;
    scanf("%lf %lf %lf", &x, &y, &z);
    t1 = acos(sin(x));
    t2 = log(1 + fabs(sinh(y)));
    s = (pow(t1, t2)) / (2 + cos(z));
    printf("%.2lf", s);
    return 0;
}