#include<stdio.h>
int main()
{
	int n,i,_is=0;
	scanf("%d",&n);
	int a[n],is;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=8;i<n;i++)
	{
		int j,cnt,_cnt;
		is=0;
		cnt=_cnt=0;
		for(j=i;j>=i-8;j--)
		{
			
			if(a[j]==1)
			{
				cnt++;
				_cnt++;
			}
			else if(_cnt!=5) _cnt=0;
			else is=1;
			if(_cnt==5 && j==i-8) is=1;
		}
		if(is==1&&cnt==7)
		{
			printf("%d",i+1);
			_is=1;
			break;
		}
	}
	if(_is==0)
	printf("-1");
	return 0;
 } 
