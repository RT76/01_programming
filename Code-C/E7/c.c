#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main()
{
    unsigned int n;
    int ret=0;
    scanf("%llu",&n);
    while(n)
    {
        n>>=1;
        ret++;
    }
    printf("%d",ret);
    return 0;
}
