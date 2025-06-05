#include <stdio.h>
int count[16] = {0};
int check(long long k)
{
    int t;
    while (k)
    {
        t = k % 10;
        if (count[t])
        {
            count[t]--;
        }
        else
            return 0;
        k /= 10;
    }
    return 1;
}
int main()
{
    int i;
    long long x;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &count[i]);
    }
    scanf("%lld", &x);
    while (check(x))
    {
        x += 1;
    }
    printf("%lld", x - 1);
}