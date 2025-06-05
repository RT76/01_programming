#include <stdio.h>
int main()
{

    int i,j, n, num, rank[30];
    scanf("%d",&n);
    for (j = 0; j < n; j++)
    {
        num=0;
        for (i = 0; i < 30; i++)
        {
            scanf("%d", &rank[i]);
        }

        for (i = 0; i < 30; i++)
        {
            if ((i + 1) == rank[i])
                num++;
        }
        if (num > 20)
            printf("****\n");
        else if (num > 10 && num <= 20)
            printf("***\n");
        else if (num <= 10 && num > 5)
            printf("**\n");
        else
            printf("#\n");
    }
    return 0;
}