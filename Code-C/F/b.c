#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, x, R;
    scanf("%lf%lf%lf", &a, &b, &c);
    x = (a * a + b * b - c * c) / (2 * a * b);
    x = sqrt(1.0 - x * x);
    //printf("x = %f\n", x);
    R = c / (2.0 * x);
    printf("%.6lf", R);
    return 0;
}
