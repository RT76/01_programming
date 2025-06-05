#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long LL;
typedef unsigned long long u64, ULL;
typedef const void *cvp;
int main()
{
    char input[128] = {0}, tmp[128] = {0}, tmp2[128] = {0};
    int dot = 0, alpha = 0, i, num;
    LL s;
    while (fgets(input, 128, stdin))
    {
        alpha = 0;
        dot = 0;
        num = 0;
        for (i = 0; input[i]; i++)
        {
            if (isalpha(input[i]))
            {
                alpha = 1;
                break;
            }
            else if (input[i] == '.')
            {
                dot++;
            }
            else if (isdigit(input[i]))
            {
                num++;
            }
        }
        if (alpha || (dot >= 2) || !num)
        {
            puts("string");
        }
        else
        {
            if (dot == 1)
            {
                puts("double");
            }
            else
            {
                sscanf(input, "%lld", &s);
                sscanf(input, "%s", tmp2);
                sprintf(tmp, "%lld", s);
                if (strcmp(tmp, tmp2))
                {
                    puts("string");
                }
                else
                {
                    if (s <= 2147483647ll && s >= -2147483648ll)
                    {
                        puts("int");
                    }
                    else
                    {
                        puts("long long");
                    }
                }
            }
        }
    }
    return 0;
}