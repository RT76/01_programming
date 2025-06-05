#include <stdio.h>
int num[5050];
int main()
{
    int m, n;
    scanf("%d", &n);
    scanf("%d", &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);
    while(m--)
    {
        int l, r;
        scanf("%d", &l);
        scanf("%d", &r);
        int t, max0, max1, max2;
        max0 = max1 = max2 = 0x80000000;
        for (int i = l - 1; i < r-1; i++)
        {
            if (num[i]> max0)
            {
                max2 = max1;
                max1 = max0;
                max0 = num[i];
            }
            else if (num[i] > max1)
            {
                max2 = max1;
                max1 = num[i];
            }
            else if (num[i] > max2)
            {
                max2 = num[i];
            }            
        }
        printf("%d\n", max2);
    }
    return 0;
}