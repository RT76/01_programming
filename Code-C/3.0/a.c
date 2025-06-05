#include <stdio.h>
int main()
{
    int n, i, j, cnt = 0, a[1024];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
                cnt++;
            else
                continue;
        }
    printf("%d", cnt);
    return 0;
}