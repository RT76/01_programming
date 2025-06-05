#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main()
{
    char s[256];
    char* i;
    gets(s);
    char *s1 = strchr(s, '{');
    char *s2 = strrchr(s, '}');
    for(i=s1+1; i<s2; i++)
    printf("%c",*i);
    printf(", ");
    for(i=s1+1; i<s2; i++)
    printf("%c",*i);
    printf("\\to 0");
    return 0;
}