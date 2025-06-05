#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main()
{
    long long a[4], b[4], l1, l2, w1, w2,l,w, s = 0;
    for (int i = 0; i < 4; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        scanf("%lld", &b[i]);
    }
    if (a[2] <= b[0] || a[3] <= b[1] || b[2] <= a[0] || b[3] <= a[1])
        s = 0;
    else
    {
        w1 = abs(a[0] - b[2]);
        w2 = abs(a[2] - b[0]);
        l1 = abs(a[1] - b[3]);
        l2 = abs(a[3] - b[1]);
        if(w1 > w2)w=w2; else w=w1;
        if(l1 > l2)l=l2;else l=l1;
    }
    s=w*l;
    printf("%lld",s);
}