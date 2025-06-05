#include <stdio.h>
int a[64] = {0};
typedef long long u64;
int main()
{
    u64 n,i;
    while (~scanf("%lld", &n))
    {
        if (n >= 0)
        {
            for (i = 0; i < 64; i++)
            {
                a[63 - i] = (n >> i) & 1LLU;
            }
        }
        else if (n < 0)
        {
            n = -n - 1;
            for (i = 0; i < 64; i++)
            {
                a[63 - i] = ~(n >> i) & 1LLU;
            }
        }
        for (i = 0; i < 64; i++)
        printf("%d",a[i]);
        printf("\n");
    }
    return 0;
}