#include <stdio.h>
#include <string.h>
char a[110][1024];
void rev(char *a, int len)
{
    int l = 0, r = len - 1;
    char tmp;
    while (l < r)
    {
        tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
    }
}
int main()
{
    int i = 0, n;
    while ((gets(a[i++]))!=NULL)
    {
        rev(a[i], strlen(a[i]));
    }
    n = i;
    // for (i = 0; i < n; i++)
    //     rev(a+i, strlen(a+i));
    for (i = n - 1; i >= 0; i--)
    {
        puts(a[i]);
    }
    return 0;
}