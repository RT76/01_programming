#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double pfunc(double);
double findroot(double lb, double ub, double eps2, double (*pfunc)(double));

int main()
{
    double x, l, r, eps2;
    scanf("%lf %lf %lf", &l, &r,&eps2);
    x = findroot(l, r, eps2, &pfunc);
    printf("%.10lf",x);
}

double pfunc(double x)
{
    return -sin(x)+0.5;
}

double findroot(double lb, double ub, double eps2, double (*pfunc)(double))
{
    double mid, f;
    while (ub > lb)
    {
        mid = (lb + ub) / 2;
        f = pfunc(mid);
        if (fabs(f) < eps2)
        {
            return mid;
        }
        else if (f*pfunc(lb) <= eps2)
        {
            ub = mid;
        }
        else
        {
            lb = mid;
        }
    }
    return lb;
}