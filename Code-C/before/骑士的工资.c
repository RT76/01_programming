#include<stdio.h>
#include<math.h> 
int main()

{
	int k,money,n,sum;
	double x;
	scanf("%d",&k);
	x=(sqrt(8*k+1)-1)/2;
	n=floor(x);
 	money=n*(n+1)*(2*n+1)/6;
	sum=(n+1)*n/2;
	if(k>sum){
		money+=(n+1)*(k-sum);
	}
	printf("%d",money);
	return 0;
}
