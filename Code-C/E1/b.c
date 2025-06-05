#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define v 13.14
int main()
{
    double a[1024] = {0.0}, b[1024] = {0.0};
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%lf", &a[i]);
    for (i = 1; i < n; i++)
    {
        b[i] = a[i] - a[i - 1];
    }
    double max = b[1];
    for (i = 1; i < n; i++)
    {
        if (b[i] > max)
        {
            max = b[i];
        }
        else
            continue;
    }
    printf("%.2lf m", v * max);
    return 0;
}
