#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double f(double t);
double s(double x);
int main()
{
    double x, p;
    scanf("%lf", &x);
    p = exp(-s(x));
    printf("%.6lf", p);
    return 0;
}
double f(double t)
{
    return exp(-(t + 0.5) * (t + 0.5));
}
double s(double x)
{
    int i, cnt = 0;
    double x0, y0;
    for (i = 0; i < 900000; i++)
    {
        x0 = 1.0*(rand() % 32768) / 32768.0 * x;
        y0 = 1.0*(rand() % 32768) / 32768.0;
        if (f(x0) > y0)
            cnt++;
    }
    return (double)cnt / 900000.0 * x;
}