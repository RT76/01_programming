#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n,num, i;
    scanf("%d", &n);
    for (i = 31; i >= 0; i--)
    {
        if (n >> i)
        {
        num = i;
            break;
        }
    }
    num+=1;
    printf("%d",num);
    return 0;
}