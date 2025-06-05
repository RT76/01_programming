#include<stdio.h>
int main()
{
	int a,x,y,z,maskx,masky,maskz;
	scanf("%d %d %d %d",&a,&x,&y,&z);
	maskx=1<<x,masky=1<<y,maskz=1<<z;
	int mask=maskx|masky|maskz;
	a=a&(~mask);
	printf("%d",a);
	return 0;
}
