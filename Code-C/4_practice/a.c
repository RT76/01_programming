#include <stdio.h>
#include <string.h>

int main()
{
    unsigned long long int i, n, p = 0, x = 0, len, a1[70];
    char a[70];
    gets(a);
    len = strlen(a);
    for (i = 0; i < len; i++)
    {
        a1[i] = a[i] - '0';
    }
    for (i = len - 1; i >= 0; i--)
    {
        x |=( a1[i] << p);
        p++;
    }
    printf("%llu", x);
    return 0;
}