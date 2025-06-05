#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
typedef long long LL;
LL gcd(LL x, LL y)
{
    return x % y ? gcd(y, x % y) : y;
}
int main()
{
    LL a1, b1, a2, b2, a, b, g, s;
    int op;
    char input[256] = {0};
    while (fgets(input, 255, stdin))
    {
        sscanf(input, "%lld/%lld %lld/%lld %d", &a1, &b1, &a2, &b2, &op);
        switch (op)
        {
        case 1:
            a = (a1 * b2 + b1 * a2);
            b = b1 * b2;
            break;
        case 2:
            a = (a1 * b2 - b1 * a2);
            b = b1 * b2;
            break;
        case 3:
            a = a1 * a2;
            b = b1 * b2;
            break;
        case 4:
            a = a1 * b2;
            b = b1 * a2;
            break;
        default:
            break;
        }
        if (a < 0 || b < 0)
        {
            s = 1;
        }
        else
        {
            s = 0;
        }
        a = llabs(a);
        b = llabs(b);
        g = gcd(a, b);
        if (g == b)
        {
            printf("%lld\n", a / b);
        }
        else
        {
            if (s)
            {
                putchar('-');
            }
            if (g != 1)
            {
                printf("%lld/%lld\n", a / g, b / g);
            }
            else
            {
                printf("%lld/%lld\n", a, b);
            }
        }
    }
    return 0;
}