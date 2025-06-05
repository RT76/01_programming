#include <stdio.h>
long long a[100005] = {0};
unsigned long long s[100005] = {0};
int main()
{
    int N = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld%llu", &a[i], &s[i]);
    }
    for (int i = 0; i < N; i++)
    {
        if (a[i] * s[i] > 0 && s[i] >= 1)
            printf("%lld %llu ", a[i] * s[i], s[i] - 1);
    }
    return 0;
}