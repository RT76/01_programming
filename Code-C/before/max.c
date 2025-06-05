#include<stdio.h>
int max(int,int);
int main() 
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d\n",max(a,b));
	printf("%d",max(max(a,b),c));
	return 0;
}

int max(int x,int y)
{
	if(x>y){
		return x;
	}else return y;
}
