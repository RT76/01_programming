#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int MAX(int a, int b)
{
    if (a < b)
        return b;
    else
        return a;
}
int cmp(const void *p, const void *q)
{
    int a = *((int *)p), b = *((int *)q);
    if (a > b)
        return 1;
    else if (a < b)
        return -1;
    else
        return 0;
}
int arr[1010010] = {0};
int main()
{
    int n, m, i, t;
    scanf("%d%d", &n, &m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", arr + i);
    }
    qsort(arr, m, sizeof(int), cmp);
    t = MAX(arr[0] - 1, n - arr[m - 1]);
    for (i = 1; i < m; i++)
    {
        t = MAX(t, (arr[i] - arr[i - 1]) / 2);
    }
    printf("%d\n", t + 1);
    return 0;
}