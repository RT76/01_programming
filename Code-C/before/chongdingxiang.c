#include <stdio.h>
int main() 
{ 
	int a,b; 
	freopen("in.txt","r",stdin); 
	freopen("out.txt","w",stdout); 
	while(scanf("%d %d",&a,&b)!=EOF) 
	printf("%d\n",a+b); 
	fclose(stdin);
	fclose(stdout);
	return 0; 
} 