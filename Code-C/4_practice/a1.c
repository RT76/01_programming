#include <stdio.h>
#include <string.h>
int main()
{
    char a[70] = {0};
    scanf("%s", a);
    int n = strlen(a), i;
    unsigned long long ans = 0, p = 0;
    for (i = n - 1; i >= 0; i--)
    {
        ans |= ((unsigned long long)(a[i] - '0') << (unsigned long long)p);
        p++;
    }
    printf("%llu\n", ans);
    return 0;
}