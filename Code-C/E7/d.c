#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, k, n, w;
    scanf("%d", &n);
    w = n / 16;
    w = w * 2 + 1;
    for (i = 1; i <= n / 4; i++)
    {
        for (j = 1; j <= n / 2 - i; j++)
            printf(" ");
        for (k = 1; k <= 2 * i - 1; k++)
            printf("*");
        printf("\n");
    }
    for (i = 1; i <= n / 2; i++)
    {
        for (j = 1; j <= n / 2 - i; j++)
            printf(" ");
        for (k = 1; k <= 2 * i - 1; k++)
            printf("*");
        printf("\n");
    }
    for (i = 1; i <= n / 4 - 1; i++)
    {
        for (j = 1; j <= (n - 1 - w)/2; j++)
            printf(" ");
        printf("|");
        for (k = 1; k <= w - 2; k++)
            printf(" ");
        printf("|\n");
    }
    for (j = 1; j <= (n - 1 - w)/2; j++)
        printf(" ");
    printf("|");
    for (k = 1; k <= w - 2; k++)
        printf("_");
    printf("|\n");
    system("pause");
    return 0;
}