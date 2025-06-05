#include <stdio.h>
int main()
{
    int n;
    double x, y, p1, p2;
    scanf("%d", &n);
    scanf("%lf %lf ", &y, &x);
    p1 = x / y;
    // printf("same\n");
    for (int i = 1; i < n; i++)
    {
        scanf("%lf%lf", &y, &x);
        p2 = x / y;
        if (p2 - p1 > 0.05)
            printf("better\n");
        else if (p1 - p2 > 0.05)
            printf("worse\n");
        else
            printf("same\n");
    }
    return 0;
}