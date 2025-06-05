#include <stdio.h>
#include <math.h>
int main()
{
    double x[1024], avg, ua, sum1 = 0, sum2 = 0;
    int n = 0, i=0;
    while (scanf("%lf", &x[i]) != EOF){
        i++;
    }
        
    n = i;
    for (i = 0; i < n; i++)
    {
        sum1 += x[i];
    }
    avg = sum1 / n;
    for (i = 0; i < n; i++)
    {
        sum2 += (x[i] - avg) * (x[i] - avg);
    }
    ua = sqrt(sum2 / (n * (n - 1)));
    printf("%.4lf %.4lf", avg, ua);
    return 0;
}