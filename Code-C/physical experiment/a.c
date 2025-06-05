#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double t[5], ave[5];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%lf", &t[j]);
            ave[i] += t[j];
        }
        ave[i] /= 5;
    }
    for (int k = 0; k < 10; k++)
    {
        printf("%10.10lf\n", ave[k]);
    }
    return 0;
}