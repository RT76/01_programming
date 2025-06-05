#include <stdio.h>
int main()
{
    int s0, s1, v0, v1;
    scanf("%d%d%d%d", &s0, &s1, &v0, &v1);
    if (s0 == s1)
        printf("Yes");
    else if (((s0 < s1) && (v0 > v1)) || (s0 > s1 && v0 < v1))
        printf("Yes");
    else
        printf("No");
    return 0;
}