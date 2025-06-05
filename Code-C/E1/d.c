#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
typedef unsigned long long ull;
ull at(ull,ull);
int main()
{
    ull a,b;
    // scanf("%lld %lld",&a,&b);
    // yihuoqufan
   // scanf()
    printf("%lld",at(a,b));
    return 0;
}
ull at(ull a,ull b)
{
    unsigned long long c;
    scanf("%d%d",&a,&b);
    c=~(a^((a&&b)&&(a||b)));
    // if(c==-1)c=1;
    // else c=0;
    return c;
}