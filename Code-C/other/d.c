#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
char a[10050];
int isrev(char *b, char *e);
int main()
{
    int wh, i, len;
    gets(a);
    len = strlen(a);
    wh = isrev(&a[0], &a[len-1]);
    // printf("%d\n", wh);
    // printf("%c\n",a[len-1]);
    if (wh==1)
    {
        for (i = 1; i < len; i += 2)
            printf("%c", a[i]);
    }
    else if(wh==0)
    {
        for (i = 0; i < len; i += 2)
            printf("%c", a[i]);
    }
}
int isrev(char *b, char *e)
{
    int tmp, x = 1;
    while (e > b)
    {

        if (*b != *e)
        {
            x = 0;
            break;
        }
        e--;
        b++;
    }
    return x;
}