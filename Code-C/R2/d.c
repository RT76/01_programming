#include <stdio.h>
int main()
{
    unsigned int k;
    long long p = 1L;
    scanf("%u", &k);
    int i, a[32] = {0};
    for (i = 0; i < 32; i++)
    {
        a[i] = (k >> i) & 1;
        if (a[i])
            printf("%lld\n", p);
        p *= 2;
    }
    return 0;
}