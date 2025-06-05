#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define Len strlen(buf)
int main()
{
    char buf[1024];
    while (gets(buf) != NULL)
    {
        if (strchr(buf, '.') != NULL)
            printf("double\n");

        else if (Len > 19 || (isalpha(buf[0]) && isalpha(buf[Len - 1])))
            printf("string\n");
        else
        {
            long long int l;
            sscanf(buf, "%lld", &l);
            int i;
            sscanf(buf, "%d", &i);
            if (l < 0)
                printf("string\n");
            else if (Len<=19 &&Len>10&& l > 0)
                printf("long long\n");
            else if(Len<=10 && i > 0)
                printf("int\n");
        }
    }
    return 0;
}