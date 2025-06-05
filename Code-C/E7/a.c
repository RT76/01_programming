#include <stdio.h>
#include <string.h>
#include<math.h>
#define len strlen(a)
int main()
{
    long long num = 0, ex;
    char a[55];
    scanf("%lld", &ex);
    getchar();
    // gets(a);
    scanf("%s",a);
    for (int i = 0; i < len; i++)
    {
        num += (long long)((a[i] - '0') * pow(ex, len - i - 1));
    }
    printf("%lld", num);
    return 0;
}