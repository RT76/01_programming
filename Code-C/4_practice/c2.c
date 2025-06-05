#include <stdio.h>
#include<math.h>
int isprime(int x);
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (isprime(i))
            printf("%d,", i);
        else
            continue;
    }
    return 0;
}
int isprime(int x)
{
    int i=sqrt(x);
    if(i*i==x) return 1;
    else return 0;
}