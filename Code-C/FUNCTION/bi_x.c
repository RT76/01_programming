#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define eps 1e-4
double f(double);
double solve_x1(double, double);
// double solve_x2(double, double);
int main()
{
    double x, left, right;
    scanf("%lf %lf",&left,&right);
    x = solve_x1(left, right);
    printf("x = %f\n", x);
    return 0;
}
double f(double x)
{
    return cos(x);
}
double solve_x1(double left, double right)
{
    double mid = (left + right) / 2;
    while (fabs(f(mid)) > eps)
    {
        mid = left + (right - left) / 2;
        f(mid) > 0 ? (right = mid) : (left = mid);
    }
    return mid;
}
//double solve_x2(double left, double right)
