#include <stdio.h>
typedef long long LL;
void swap(LL *a, LL *b)
{
    if (*a > *b)
    {
        LL tmp = *a;
        *a = *b;
        *b = tmp;
    }
}
int main()
{
    LL x, y, ans=0;
    scanf("%lld %lld", &x, &y);
    swap(&x, &y);
    while (x != 0 && y != 0)
    {
        swap(&x, &y);
        ans += x * 4 * (y / x);
        y %= x;
    }
    printf("%lld", ans);
    return 0;
}
