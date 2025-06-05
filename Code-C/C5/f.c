#include "stdio.h"
#include "math.h"
#define Dlta 1.e-9
int iterationNum = 0; // just for demoration
double f(double x)
{
    return erf(x);
}
double bin_find(double x_min, double x_max)
{
    double x_mid;
    x_mid = (x_min + x_max) / 2;
    // for demoration
    printf("\n %5d , x=%lf , f(mid)= %lf \n",
           iterationNum++, x_mid, f(x_mid));
    if (fabs(f(x_mid)) < Dlta)
        return x_mid; // find result
    else
        return f(x_mid) * f(x_min) > 0 ? bin_find(x_mid, x_max) : bin_find(x_min, x_mid);
}
int main()
{
    double x_min, x_max, result;
    int flag = 0;
    printf("\n Enter lower & upper bound:: ");
    while (1)
    {
        scanf("%lf%lf", &x_min, &x_max);
        if (fabs(f(x_min)) < Dlta)
        {
            result = x_min;
            flag = 1;
            break;
        }
        if (fabs(f(x_max)) < Dlta)
        {
            result = x_max;
            flag = 1;
            break;
        }
        if (x_min < x_max && f(x_min) * f(x_max) < 0)
            break;
        else
            printf("\n Enter lower & upper bound::");
    }
    if (!flag)
        result = bin_find(x_min, x_max);
    printf("\n The reslut is %.3lf", result);
    return 0;
}