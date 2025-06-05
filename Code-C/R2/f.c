#include <stdio.h>
int main(int argc, char **argv)
{
    unsigned long long a, m, n;
    while (~scanf("%lld%lld%lld", &a, &m, &n))//读入控制
    {
        unsigned long long m2, n2;
        m2 = (a >> m) & 1;//位运算取出对应位置上的数
        n2 = (a >> n) & 1;
        if (m2 == n2)//相同就等效于不换，直接输出
            printf("%lld\n", a);
        else if (m2 != n2)
        {
            (a) ^= (1 << (n));//(1<<(n))：将第n位置为1，其余位为0，再与a异或
            (a) ^= (1 << (m));//根据异或的性质。。。
            printf("%lld\n", a);
        }
    }
    return 0;
}