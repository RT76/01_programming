#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define M 1048580
int a[M];
int cmpfunc(const void *a, const void *b)
{
    if(*(int *)a > *(int *)b)return 1;
    else if(*(int *)a < *(int *)b)return -1;
    else return 0;
    // return (*(int *)a - *(int *)b);
}

int main()
{
    int n, i;
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), cmpfunc);
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}