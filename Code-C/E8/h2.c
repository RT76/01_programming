#include <stdio.h>
#include <stdlib.h>
int a[7000000];
int n, i, ans = 0;
int cmp(const void *a, const void *b)
{
    int *x = (int *)a, *y = (int *)b;
    if (*x < *y)
        return -1;
    else
        return 1;
}
int main()
{
    
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        ans ^= a[i];
    }qsort(a, n, sizeof(int), cmp);
    if (ans == 0 && (~(n & 1)))
        printf("False Alarm.");
    else if (n & 1)
        printf("%d", ans);
    else
    {
        // 
        qsort(a, n, sizeof(int), cmp);
    //     for (i = 0; i < n; i++)
    // {
    //     printf("%d ", a[i]);
    // }
        for (i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                a[i] = 0;
                a[i + 1] = 0;
            }
            else
                continue;
        }
        for (i = 0; i < n; i++)
        {
            if (a[i] > 0)
                printf("%d ", a[i]);
        }
    }
}