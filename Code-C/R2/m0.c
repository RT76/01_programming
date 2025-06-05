#include <stdio.h>
int time(int t){
    if(t<0)t+=24* 60;
    else t%=24*60;
}
int main()
{
    char str1[32], str2[32], op1, op2;
    int h1, h2, m1, m2, t1, t2, zh1, zm1, zh2, zm2;
    fgets(str1, 32, stdin);
    // fgets(str2, 32, stdin);
    sscanf(str1, "%d:%d %c%2d%2d", &h1, &m1, &op1, &zh1, &zm1);
    // sscanf(str1, "%d:%d %c%2d%2d", &h2, &m2, &op2, &zh2, &zm2);
    switch (op1)
    {
    case '-':
        t1 = (h1 + zh1) * 60 + m1 + zm1;
        break;
    case '+':
        t1 = (h1 - zh1) * 60 + m1 - zm1;
        break;
    }
    fgets(str1, 32, stdin);
    // fgets(str2, 32, stdin);
    sscanf(str1, "%d:%d %c%2d%2d", &h1, &m1, &op1, &zh1, &zm1);
    // sscanf(str1, "%d:%d %c%2d%2d", &h2, &m2, &op2, &zh2, &zm2);
    switch (op1)
    {
    case '-':
        t2 = (h1 + zh1) * 60 + m1 + zm1;
        break;
    case '+':
        t2 = (h1 - zh1) * 60 + m1 - zm1;
        break;
    }
    time(t1);
    time(t2);
    if (t1 > t2)
        puts("1");
    else if (t2 > t1)
        puts("2");
    else if (t1 = t2)
        puts("Same Time");
    return 0;
}