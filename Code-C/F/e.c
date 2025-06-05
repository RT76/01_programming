#include <stdio.h>
#include<ctype.h>
#include <string.h>
int main()
{
    char a[35], b[35], s[135];
    gets(a);
    gets(b);
    for (int i = 0; i < strlen(a); i++)
    {
        if (isupper(a[i]))
            a[i] += 32;
    }
    for (int i = 0; i < strlen(b); i++)
    {
        if (isupper(b[i]))
            b[i] += 32;
    }
    while (gets(s) != NULL)
    {
        for (int i = 0; i < strlen(s); i++)
        {
            if (isupper(s[i]))
                s[i] += 32;
        }
        if ((strstr(s, a) != NULL) && (strstr(s, b) == NULL))
            printf("GOOD\n");
        else if ((strstr(s, a) == NULL) && (strstr(s, b) == NULL))
            printf("%%%%%%\n");
        else
            printf("BAD\n");
    }
    return 0;
}