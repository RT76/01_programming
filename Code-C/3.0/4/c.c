#include <stdio.h>
int fun(int, int);
int main()
{
    int a, b;
    while (~scanf("%d %d", &a, &b))
    {
        printf("%d\n", fun(a, b));
    }
}
int fun(int a, int b)
{
    if (0 == b)
        return 1;
    else if (0 == b % 2)
        return fun(a * a, b / 2);
    else
        return a * fun(a * a, b / 2);
}