// 21374427 孙凯宁
#include<stdio.h>
int a[6000001];
int main()
{
	int ans=0;
	int ans1=0;
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		ans=ans^a[i];
	}
	if(ans==0&&n%2==0)
	printf("False Alarm.");
	else if(n%2!=0)
	printf("%d",ans);
	else
	{
		int temp=ans&(~ans+1);
		for(j=1;j<=n;j++)
		if((a[j]&temp)!=0)
		ans1=ans1^a[j];
		ans=ans^ans1;
		int bucket;
		if(ans<ans1)
		{
			bucket=ans;
			ans=ans1;
			ans1=bucket;
		}
		printf("%d %d",ans1,ans);
	}
	return 0;
}