#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
typedef long long LL;
LL primetable[10000000] = {0};
int isprime(LL *primetable, LL n)
{
    //利用质数表 判断是否为质数
    int i;
    for (i = 0; primetable[i] * primetable[i] <= n; i++)
    {
        if (n % primetable[i] == 0)
            return 0;
    }
    return 1;
}
int initmaxprime(LL *primetable, LL maxval)
{
    //构造最大质数 小于等于maxval的质数表
    //储存于primetable数组中 需要保证primetable足够大
    //返回值为primetable的实际长度
    int cnt = 3, step;
    LL num;
    primetable[0] = 2;
    primetable[1] = 3;
    primetable[2] = 5;
    num = 7;
    step = 2;
    while (num <= maxval)
    {
        step = 6 - step;
        if (isprime(primetable, num))
        {
            primetable[cnt++] = num;
        }
        num += step;
    }
    return cnt;
}
void initnprimes(LL *primetable, LL n)
{
    //构造含有n个质数的质数表
    //储存于primetable数组中 需要保证primetable足够大
    int cnt = 3, step = 2;
    primetable[0] = 2;
    primetable[1] = 3;
    primetable[2] = 5;
    LL num = 7;
    while (cnt <= n)
    {
        step = 6 - step;
        if (isprime(primetable, num))
        {
            primetable[cnt++] = num;
        }
        num += step;
    }
}
int main()
{
    LL n = 10040;
    initnprimes(primetable, n);
    int n1, i;
    while (~(n1 = getchar()))
    {
        for (i = 0; i < n1; i++)
        {
            int a;
            scanf("%d", &a);
            printf("%d ", primetable[a]);
        }
        printf("\n");
    }
    return 0;
}