#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int n, i, Ans, a[100005];
int cmp(const void *a, const void *b)
{
    int *x = (int *)a;
    int *y = (int *)b;
    if (*x > *y)
        return 1;
    else
        return -1;
}

int main()
{
    int i;
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
    qsort(a + 1, n, sizeof(int), cmp);
    int cnt = 0;
    for (i = 1; i <= n + 1; ++i) 
        if (a[i] != a[i - 1])
        {
            Ans += cnt & 1;
            cnt = 1;
        }
        else
            ++cnt;
    printf("%d", Ans);
    return 0;
}