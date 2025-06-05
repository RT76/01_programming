#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long s64, LL;
typedef unsigned long long u64, ULL;
typedef const void *cvp;
typedef struct data
{
    int age;
    char name[1004];
} data;
data arr[200010], *parr[200010];
int main()
{
    // FILE *fp = freopen("../../../input.txt", "r", stdin);
    // FILE *fp2 = freopen("../../../output.txt", "w", stdout);
    int n, m, k, i, j, l, r;
    data *p;
    scanf("%d%d%d", &n, &m, &k);
    for (i = 1; i <= n; i++)
    {
        scanf("%d%s", &arr[i].age, arr[i].name);
        parr[i] = arr + i;
    }
    for (i = 1; i <= m; i++)
    {
        scanf("%d%d", &l, &r);
        while (l < r)
        {
            p = parr[l];
            parr[l] = parr[r];
            parr[r] = p;
            l++;
            r--;
        }
    }
    for (i = 1; i <= k; i++)
    {
        scanf("%d", &j);
        printf("%d %s\n", parr[j]->age, parr[j]->name);
    }
    return 0;
}