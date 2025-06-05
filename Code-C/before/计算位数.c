#include<stdio.h>

int main()
{
	unsigned long x;
	int n=0;
	n++;
	scanf("%d",&x);
	x/=10;
	while(x>0){
		n++;
		x/=10;
	}
	printf("%d\n",n);
	system("pause");
	return 0;
}
