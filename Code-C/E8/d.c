#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    int op;
    fp = freopen("301.txt", "w", stdout);
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &op);
        switch (op)
        {
        case 1:
        {
            int a, b;
            scanf("%d%d", &a, &b);
            printf("%d\n", a + b);
        }
        break;
        case 2:
        {
            long long a, b;
            scanf("%lld%lld", &a, &b);
            printf("%lld\n", a + b);
        }
        break;
        case 3:
        {
            double a, b;
            scanf("%lf%lf", &a, &b);
            printf("%.5f\n", a + b);
        }
        break;
        }
    }

    fclose(fp);
    return 0;
}