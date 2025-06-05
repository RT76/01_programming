#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void rev(int *b, int *e);
int main()
{
    int a[1024], i, len = 0;
    for (i = 0; ~getchar(); i++)
    {
        a[i] = getchar();
        len++;
    }
    rev(&a[0], &a[len]);
    for (i = 0; i < len; i++)
        printf("%d ", a[i]);
    return 0;
}
void rev(int *b, int *e)
{
    int tmp;
    while (e > b)
    {
        tmp = *b;
        *b = *e;
        *e = tmp;
        e--;
        b++;
    }
}