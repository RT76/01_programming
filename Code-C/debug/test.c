#include <stdio.h>
int main()
{
int a;
printf("\ninput a score 0~100: ");
// 无效输入时，条件就为真
while(scanf("%d", &a) == 0 || (a < 0 || a > 100)){
printf("invalid input: %d\n", a);
printf("input a score 0~100: ");
while(getchar() != '\n');
}
printf("Good job! Valid input %d!\n", a);
return 0;
}