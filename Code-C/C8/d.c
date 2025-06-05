#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long long num;
    int n[33], sum = 0;
    scanf("%lld", &num);
    int len = 0;
    while (num / 2)
    {
        n[len] = num % 2;
        len++;
        num = num / 2;
    }
    n[len] = num;
    len++;
    // printf("%d\n",len);
    for (int i = len - 1; i >= 0; i--)
    {
        sum += (abs(1 - n[i]) * pow(2, i));
    }
    printf("%d", sum);
}