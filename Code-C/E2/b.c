#include<stdio.h>
int main()
{
	int num,i;
	scanf("%d",&num);
	int a[num],k[num],n[num],s[num];
	for(i=0;i<num;i++)
	{
		//int a,k,n,s;
		scanf("%d %d %d",&a[i],&k[i],&n[i]);
		s[i]=n[i]*a[i]+(n[i]-1)*n[i]*k[i]/2;
		//printf("%d",s);
	}
	for(i=0;i<num;i++)
	{
		printf("%d\n",s[i]);
	}
	return 0;
}
