#include <stdio.h>
#include <math.h>
int main()
{
    int m;
    scanf("%d", &m);
    while (m != 1)
    {
        if (m % 2 == 0)
        {
            m /= 2;
        }
        else
        {
            m = 3 * m + 1;
        }
        printf("%d\n", m);
    }
    return 0;
}
