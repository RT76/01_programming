#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
char a[128];
int main()
{
    double num = 0, fl = 0, x;
    int n = 0, f = 0;
    while (scanf("%s", a) != EOF)
    {
        if (strchr(a, '.') != NULL)
        {
            sscanf(a, "%lf", &x);
            fl += x;
            f++;
        }
        else
        {
            sscanf(a, "%lf", &x);
            num += x;
            n++;
        }
    }
    printf("%d %.5lf\n", n, num / n);
    printf("%d %.5lf\n", f, fl / f);
}