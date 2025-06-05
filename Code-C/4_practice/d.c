#include <stdio.h>
void gua(int n, int len);
int main()
{
    int a, a0, len = 0, i = 0, b[3] = {0, 0, 0};
    scanf("%d", &a);
    a0 = a % 8;
    while (a)
    {
        a /= 8;
        len++;
    }
    switch (a0)
    {
    case 0:break;
    case 1:
        b[0] = 1;
        break;
    case 2:
        b[1] = 1;
        break;
    case 3:
        b[0] = b[1] = 1;
        break;
    case 4:
        b[2] = 1;
        break;
    case 5:
        b[2] = b[0] = 1;
        break;
    case 6:
        b[1] = b[2] = 1;
        break;
    case 7:
        b[2] = b[1] = b[0] = 1;
        break;
    }

    for (i = 2; i >= 0; i--)
        gua(b[i], len);
    return 0;
}
void gua(int n, int len)
{
    int i;
    if (n)
    {
        for (i = 0; i < 3 * len; i++)
        {
            printf("-");
        }
        printf("\n");
    }
    else if (n == 0)
    {
        for (i = 0; i < len; i++)
            printf("-");
        for (i = 0; i < len; i++)
            printf(" ");
        for (i = 0; i < len; i++)
            printf("-");
        printf("\n");
    }
}