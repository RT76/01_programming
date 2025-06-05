#include<stdio.h>

double fun(int);
int main()
{
	int k;
	scanf("%d",&k);
	fun(k);
	if(fun(k)>0)
	printf("up %.6lf",fun(k));
	else printf("down %.6lf",-fun(k));
	return 0;
}
double fun(int k)
{
	if(k==0)
	return 0.693147;
	else{
		int op;
		if(k%2==0) 
		op=1;
		else op=-1;
		return op/k+fun(k-1);
	}
}
