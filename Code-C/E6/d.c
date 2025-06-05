#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
char s[5][105];
int num[50], i, j;
int main()
{

    for (i = 1; i <= 4; i++)
    {
        gets(s[i]);
        int len = strlen(s[i]);
        for (j = 0; j < len; j++)
        {
            if (s[i][j] >= 'A' && s[i][j] <= 'Z')
            {
                num[(int)(s[i][j] - 'A')]++;
            }
        }
    }
    int max = 0;
    for (i = 0; i < 26; i++)
    {
        if (num[i] >= max)
        {
            max = num[i];
        }
    }
    for (i = max; i > 0; i--)
    {
        for (j = 0; j < 26; j++)
        {
            if (num[j] >= i)
                printf("*");
            else
                printf(" ");
            if (j < 26)
                printf(" ");
        }
        printf("\n");
    }
    for (i = 0; i < 26; i++)
    {
        printf("%c ", i + 'A');
    }
    return 0;
}