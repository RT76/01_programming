#include <stdio.h>

int main()
{
    int a, b, c, tmp;
    scanf("%d %d %d", &a, &b, &c);
    if (a < b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (a < c)
    {
        tmp = a;
        a = c;
        c = tmp;
    }
    if (a >= b + c)
        printf("no triangle\n");
    else
    {
        if (a * a > b * b + c * c)
            printf("obtuse triangle\n");
        else if (a * a == b * b + c * c)
            printf("right triangle\n");
        else if (a * a < b * b + c * c)
            printf("acute triangle\n");
        if (a == b && b == c)
        {
            printf("equilateral triangle");
        }
        else if (a == b || a == c || b == c)
        {
            printf("isosceles triangle");
        }
    }
    return 0;
}