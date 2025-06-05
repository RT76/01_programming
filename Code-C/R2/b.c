#include <stdio.h>
int main(int argc, char **argv)
{
    double a, b, c, p, s;
    int i, n;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%lf%lf%lf", &a, &b, &c);
        p=(a+b+c)/2;
        s=p*(p-a)*(p-b)*(p-c);
        printf("%.1lf\n",s);
    }
    return 0;
}