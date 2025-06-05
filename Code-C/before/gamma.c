#include<stdio.h>
#include<math.h>
int main()
{
	int k=0,i;
	scanf("%d",&k);
	double sum=-0.693147;
//	if(k==0)
//	printf("%lf",sum);
	if(k>0)
	{
		for(i=1;i<=k;i++)
		{
			sum+=(-1+(i%2)*2)*(1.00/i);
		}
	}
	if(sum>0)printf("up %.6lf",sum);
	else if(sum<0)printf("down %.6lf",-sum);
	return 0;
 } 
