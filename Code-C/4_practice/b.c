#include <stdio.h>
int solve(int, int, int);
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", solve(a, b, c));
    return 0;
}
int solve(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;
    else if (a < b && b < c && c < 8 && a > 0)
        return solve(a, b, c - 1) + solve(a, b - 1, c - 1) - solve(a, b - 1, c);
    else if (a > 8 || b > 8 || c > 8)
        return solve(8, 8, 8);
    else
        return solve(a - 1, b, c) + solve(a - 1, b - 1, c) + solve(a - 1, b, c - 1) - solve(a - 1, b - 1, c - 1);
}