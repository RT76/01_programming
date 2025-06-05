#include <stdio.h>
#define E 2.718281828459045
int main()
{
    double j = 1, e = 1.0;
    int i, n;
    scanf("%d", &n);
    if (n > 17)
        n = 17;
    for (i = 1; i <= n; i++)
    {
        j *= i;
        e += 1.0 / j;
    }
    printf("%.14lf", e);
    return 0;
}