#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <stdio.h>
int qlbh(int n)
{
    scanf("%d", &n);
    if (n == 9)
    {
        double y, x, a;
        for (y = 1.314f; y > -1.314f; y -= 0.1314f)
        {
            for (x = -1.314f; x < 1.314f; x += 0.0520f)
            {
                a = x * x + y * y - 1;
                putchar(a * a * a - x * x * y * y * y <= 0.0f ? '*' : ' ');
            }
            putchar('\n');
        }
        return 0;
    }
    else
    {
        printf("Again\n");
        return qlbh(n);
    }
}
int main()
{
    int WST;
    qlbh(WST);
    return 0;
}