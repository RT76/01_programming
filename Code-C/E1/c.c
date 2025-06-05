#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main()
{
    int h, h1, h2, i, j, k;
    scanf("%d", &h);
    h2 = h / 3;
    h1 = h2 * 2;
    int l = (h2 / 4) * 2 + 1;
    for (i = 0; i < h1; i++)
    {
        for (j = h1 - 1 - i; j > 0; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * (i + 1) - 1; k++)
            printf("*");
        //}

        printf("\n");
    }
    for (i = 0; i < h2; i++)
    {
        for (j = 0; j < h1 - ((l - 1) / 2) - 1; j++)
        {
            printf(" ");
        }
        for (k = 0; k < l; k++)
            printf("|");
        printf("\n");
    }
    return 0;
}