#include<stdio.h>
int main()
{
    int n,i,j,num[1024]={0},x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=50;j++)
        {
            scanf("%d",&x);
            if(x==j)num[i]++;
        }
    }
    
	int hold;
	for (i = 0; i < n; i++)
		for (j = 1; j < n - i + 1; j++)
		{
			if (num[j] < num[j + 1])
			{
				hold = num[j];
				num[j] = num[j + 1];
				num[j + 1] = hold;
			}
		}

	for (i = 0; i < n; i++)
		printf("%d\n", num[i]);
    return 0;
}