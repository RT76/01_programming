#include<stdio.h>
int max(int,int);
int min(int,int);
int gcd(int,int);
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int d,e,f;
	d=min(a,min(b,c));
	e=max(a,max(b,c));
	f=gcd(d,e);
	d/=f;
	e/=f;
	printf("%d/%d",d,e);
	return 0;
}
int min(int x,int y)
{
	if(x>y)return y;
	else return x; 
}
int max(int x,int y)
{
	if(x>y)return x;
	else return y;
}
int gcd(int a, int b)
{
	return b ? gcd(b, a%b) : a;
}
