#include<stdio.h>
#include<math.h>
int main()
{
	double e,n;
	printf("请输入整数n=");
	scanf("%lf",&n);
	e=pow(1+1/n,n);
	printf("自然对数的底e的近似值为%1.20f\n",e);
	system("pause");
	return 0;
}
