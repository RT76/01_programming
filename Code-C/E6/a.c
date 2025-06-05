#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main()
{
    char *s;
    char*e;
    char buf[256];
    char a;
    gets(buf);
    scanf("%c", &a);
    s = strchr(buf, a);
    e = strrchr(buf, a);
    if (s == NULL)
        printf("not exist");
    else if (s == e)
        printf("once");
    else
        printf("%d", (e - s) / sizeof(char));
    return 0;
}