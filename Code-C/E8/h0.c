#include <stdio.h>
#include <stdlib.h>
int arr[7000000];
int i, n, ans;
void swap(int *a, int *b)
{
    if (*a > *b)
    {
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }
}
int research(int arr[], int len, int *p1, int *p2)
{
    int i = 0;
    int res = 0;
    int pos = 0;
    for (i = 0; i < len; i++) 
    {
        res ^= arr[i];
    }

    for (i = 0; i < len; i++) 
    {
        if ((res >> i) & 1 == 1)
        {
            pos = i;
            break;
        }
    }

    for (i = 0; i < len; i++)
    {
        if ((arr[i] >> pos) & 1 == 1)
        {
            (*p1) ^= arr[i];
        }
    }
    (*p2) = res ^ (*p1);
}

int main()
{
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        ans ^= arr[i];
    } // qsort(a, n, sizeof(int), cmp);
    if (ans == 0 && (~(n & 1)))
        printf("False Alarm.");
    else if (n & 1)
        printf("%d", ans);
    else
    {
        int ret1 = 0;
        int ret2 = 0;
        research(arr, n, &ret1, &ret2);
        swap(&ret1, &ret2);
        printf("%d %d\n", ret1, ret2);
    }
    return 0;
}