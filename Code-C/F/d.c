#include <stdio.h>
int main()
{
    int a, b, c;
    
    while (scanf("%d%d", &a, &b) != EOF)
    {
        int n=0;
        c = a ^ b;
        for (int i = 0; i < 32;i++)
        {
            if ((c >> i)&1)
                n++;
        }printf("%d\n", n);
    }
}