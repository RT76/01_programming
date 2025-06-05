#include<stdio.h>

int main()
{
	int x,y=1,n=1;
//	scanf("%d",&n);
	for(x=1;x<1000;x++){
		y=(n * ((x + 1) % 2333)) % 2333;
		n=y;
	}
	printf("%d",y);
	return 0;
}
