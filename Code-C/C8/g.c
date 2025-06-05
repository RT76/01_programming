#include <stdio.h>
int main()
{
    long long ans[128] = {0};
    ans[2] = 1;
    ans[3] = 1;
    ans[4] = 1;
    int n, i;
    scanf("%d", &n);
    if (n <= 4)
        puts("1");
    else
    {
        for (i = 5; i <= n; i++)
        {
            ans[i] = ans[i - 2] + ans[i - 3];
        }
        printf("%lld", ans[n]);
    }
    return 0;
}