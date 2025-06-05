//equation:  (a1+an)*(an-a1+1)/2=num     len=(an-a1+1)MIN    for(len=2;;len++)
//num%2==1   len=2
//num%2==0   (a1+an)=num*2/len=x    (an-a1)=len-1=y      an=(x+y)/2  a1=(x-y)/2
#include<stdio.h>
#include<limits.h>  //unsigned long long MAX 18446744073709551615 

int main()
{
//	printf("%llu\n",ULLONG_MAX);
	unsigned long long num,a1,an,len,x=0,y=0,i;//1e18用llu防止爆掉（不可能用高精度吧） 
	scanf("%llu",&num);
	if(num%2==1)//奇数简单 
	{
		printf("%llu = %llu + %llu",num,num/2,num/2+1);
		return 0;
	}
	for(len=3;;len++)
	{
		if((num*2%len)!=0)	continue;//x不能整除
		x=num*2/len;
		y=len-1;
		if(x%2!=y%2)	continue;//a1,an不能被整除
		an=(x+y)/2;//计算首项和末项 
		a1=(x-y)/2;
		break;
	}
	if(an==0&&a1==0)//不存在这样的序列 
	{
		printf("-1");
		return 0;
	}
	if(len<=10000)//逐个输出 
	{
		printf("%llu = %llu",num,a1);
		for(i=a1+1;i<=an;i++)
			printf(" + %llu",i);
	}
	else//省略输出 
	{
		printf("%llu = %llu + ... + %llu",num,a1,an);
	}
	return 0;
}
