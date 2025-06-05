#include <stdio.h>
int main()
{
char op; double x, y, r;
scanf("%lf%c%lf", &x, &op, &y);
switch(op){
case '+': r = x + y; break;
case '-': r = x - y; break;
case '*': r = x * y; break;
case '/':
if(0 != y) // fabs(y) > epsilon
{
r = x / y;
break;
}
default:
printf("0不能作为被除数: %f %c %f\n", x, op, y);
system("pause");
return 1;
}
printf("%6.2f %c %6.2f = %12.4f\n", x, op, y, r);
system("pause");
return 0;
}

