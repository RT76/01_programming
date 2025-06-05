#include<stdio.h>
int min(int,int);
int div(int,int);

int main()
{
	int n,a1,a2,a,b1,b2,b,c1,c2,c;
	scanf("%d",&n);
	scanf("%d %d",&a1,&a2);
	scanf("%d %d",&b1,&b2);
	scanf("%d %d",&c1,&c2);
	a=div(n,a1)*a2;
	b=div(n,b1)*b2;
	c=div(n,c1)*c2; 
	printf("%d",min(min(a,b),c));
	return 0;
}
int min(int x,int y)
{
	if(x<y)
	{return x;} 
	else return y;	
}
int div(int x,int y)
{
	if(x%y==0){
		return (x/y);
	}else return (x/y+1);
}
