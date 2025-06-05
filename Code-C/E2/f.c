#include<stdio.h>
int main()
{
	int x,m,n,xm,xn;
	scanf("%d %d %d",&x,&m,&n);
	xm=x&(1<<m);
	xn=x&(1<<n);
	if(xm)
	 {
	 x|=(1<<n); 
	 }
	 else
	 {
	 x&=~(1<<n); 
	 }
	 if(xn)
	 {
	 x|=(1<<m); 
	 }
	 else
	 {
	 x&=~(1<<m); 
	 }
	 printf("%d",x);
	 return 0;
}

