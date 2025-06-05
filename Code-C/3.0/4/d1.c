#include <stdio.h>
#include <math.h>

double fan(double, double, double, double, double, double);
int main()
{
    double x1, x2, x3, x4, x5, y1, y2, y3, y4, y5, z1, z2, z3, z4, z5;
    scanf("%lf %lf %lf", &x1, &y1, &z1);
    scanf("%lf %lf %lf", &x2, &y2, &z2);
    scanf("%lf %lf %lf", &x3, &y3, &z3);
    scanf("%lf %lf %lf", &x4, &y4, &z4);
    scanf("%lf %lf %lf", &x5, &y5, &z5);
    printf("%.3lf\n", fan(x4, y4, z4, x5, y5, z5));
    printf("%.3lf\n", fan(x1, y1, z1, x3, y3, z3));
    printf("%.3lf\n", fan(x1, y1, z1, x5, y5, z5));
    printf("%.3lf\n", fan(x2, y2, z2, x4, y4, z4));
    printf("%.3lf\n", fan(x3, y3, z3, x5, y5, z5));
    printf("%.3lf\n", fan(x1, y1, z1, x2, y2, z2));
    printf("%.3lf\n", fan(x4, y4, z4, x3, y3, z3));
    printf("%.3lf\n", fan(x1, y1, z1, x4, y4, z4));
    return 0;
}
double fan(double x1, double y1, double z1, double x2, double y2, double z2)
{
    double u1, u2, u3, max, tmp;
    u1 = fabs(x1 - x2);
    u2 = fabs(y1 - y2);
    u3 = fabs(z1 - z2);
    tmp = u1 > u2 ? u1 : u2;
    max = tmp > u3 ? tmp : u3;
    return max;
}