#include <stdio.h>
int main()
{
    int a1, a2, b1, b2;
    int i, j, k;
    scanf("%d", &a1);
    scanf("%d", &b1);
    scanf("%d", &a2);
    scanf("%d", &b2);
    int a[a1][b1], b[a2][b2], c[a1][b2];
    for (i = 0; i < a1; i++)
        for (j = 0; j < b2; j++)
        c[i][j]= 0;
    for (i = 0; i < a1; i++)
        for (j = 0; j < b1; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < a2; i++)
        for (j = 0; j < b2; j++)
            scanf("%d", &b[i][j]);
    for (i = 0; i < a1; i++)
        for (j = 0; j < b2; j++)
        {
            for (k = 0; k < b1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    for (i = 0; i < a1; i++)
    {
        for (j = 0; j < b2; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}