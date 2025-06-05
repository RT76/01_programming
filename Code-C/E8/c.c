#include <stdio.h>
typedef long long LL;
LL max = 0,k;
void col(LL k)
{
    if (k > max)
        max = k;
    if (k == 1)
    {
        printf("1 ");
        return;
    }
    else
    {
        if (k & 1)
            col(3 * k + 1);
        else
            col(k >> 1);
    }
    printf("%lld ", k);
}
int main(){
    scanf("%lld",&k);
    col(k);
    printf("\n%lld",max);
    return 0;
}