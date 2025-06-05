#include<stdio.h>
int main()
{
    int n,i;
    double sum=0.0,a;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%lf",&a);
        sum+=a;
    }
    sum*=0.95;
    printf("%.2lf",sum);
    return 0;
}