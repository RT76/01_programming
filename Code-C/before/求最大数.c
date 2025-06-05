#include<stdio.h>

int main()
{
	int a=0,b=0,t;
	while(a>=0){
		a++;
	}
	printf("\nint类型的最大正数为%d(这是电脑一步一步加出来的!)\n",a-1);
	t=a-1;
	while(t>1){
		b++;
		t/=10;
	}
	printf("总共%d位数！",b);
	return 0;
 } 
