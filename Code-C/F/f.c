#include<stdio.h>

int main()
{
	int a,b,c;
	for(a=0;a<20;a++)
	for(b=0;b<33;b++){
		c=100-a-b;
		if(c%3!=0||c<0)
		continue;
		if(3*b+5*a+c/3==100)
		printf("%d %d %d\n",a,b,c);
	}
	return 0;
} 
