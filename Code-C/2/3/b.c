#include <stdio.h>
#define M 1000000007
int main()
{
    long long a = 1, b = 1, n, i;
    scanf("%lld", &n);
    for (i = 0; i < n; i++)
    {
        b = b + a;
        a = b - a;
        a = a % M;
        b = b % M;
    }
    printf("%lld", a % M);
    return 0;
}