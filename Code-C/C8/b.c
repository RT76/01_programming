#include <stdio.h>
int main()
{
    int a, b;
    char c;
    while ((scanf("%d %c %d", &a, &c, &b)) != EOF)
    {
        switch (c)
        {
        case '+':
            printf("%d\n",a+b);
            break;
        case '-':
            printf("%d\n",a - b);
            break;
        case '*':
            printf("%d\n",a * b);
            break;
        case '/':
            printf("%.4lf\n",1.0*a / b);
            break;
        case '%':
            printf("%d\n",a%b);
            break;
        }
        // printf("%d", result);
    }
    return 0;
}