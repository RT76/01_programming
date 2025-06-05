#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("基础运算");
        break;
    case 2:
        printf("基本数据处理");
        break;
    case 3:
        printf("程序结构");
        break;
    case 4:
        printf("函数");
        break;
    case 5:
        printf("数组");
        break;
    case 6:
        printf("指针");
        break;
    case 7:
        printf("结构与联合");
        break;
    case 8:
        printf("综合应用");
        break;
    }
    return 0;
}