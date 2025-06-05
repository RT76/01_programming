#include<stdio.h>
#include<math.h> 
int main()
{ 
	int t,i; 
	scanf("%d",&t);  
	for(i=0;i<t;i++)
	{ 
		int n,j,a;
		scanf("%d",&n);  
		int max=1,min=1000000000; 
		for(j=0;j<n;j++)
		{ 
			scanf ("%d",&a); 
			if (a>max) max=a; 
			if(a<min) min=a; 
		} 
		printf("%d\n",max-min); 
	} 
	return 0; 
}

