#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[260], b[40], *p;
    int cnt = 0;
    gets(a);
    gets(b);
    p = a;
    while (1)
    {
        p = strstr(p, b);
        if (p != NULL)
        {
            p += 1;
            cnt++;
        }
        else
            break;
    }
    printf("%d\n", cnt);
    return 0;
}