#include <stdio.h>
int main()
{
    char str1[32], str2[32], op1, op2;
    int h1, m1, t1 = 0, t2 = 0, zh1, zm1;
    int h2, m2, zh2, zm2;
    fgets(str1, 32, stdin);
    sscanf(str1, "%d:%d %c%2d%2d", &h1, &m1, &op1, &zh1, &zm1);
    switch (op1)
    {
    case '-':
        t1 = (h1 + zh1) * 60 + m1 + zm1;
        break;
    case '+':
        t1 = (h1 - zh1) * 60 + m1 - zm1;
        break;
    case ' ':
        t1 = h1 * 60 + m1;
        break;
    }
    fgets(str2, 32, stdin);
    sscanf(str2, "%d:%d %c%2d%2d", &h2, &m2, &op2, &zh2, &zm2);
    switch (op2)
    {
    case '-':
        t2 = (h2 + zh2) * 60 + m2 + zm2;
        break;
    case '+':
        t2 = (h2 - zh2) * 60 + m2 - zm2;
        break;
    case ' ':
        t2 = h2 * 60 + m2;
        break;
    }
    if (t1 > t2)
        puts("1");
    else if (t2 > t1)
        puts("2");
    else if (t1 = t2)
        puts("Same Time");
    return 0;
}