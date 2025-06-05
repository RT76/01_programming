#include<stdio.h>
int main()
{
	unsigned long long a,b,c,n=10;
	//scanf("%lld",&n);
	if(n%2!=0){
		a=(n-1)/2;
		b=a+1;
		printf("%llu = %llu + %llu\n",n,a,b);
	}
	else{
		for	(c=3;n%c!=0&&c<=n/2+1;c+=2);
		if(n%c==0){
			a=n/c-(c-1)/2;
			b=n/c+(c-1)/2;
		if(a<0){
			printf("-1\n");
		}	
		else if(a==0){
				a=1;
				printf("%llu =",n);
			while(a<b){
				printf("%llu + ",a);
				a++;
				}
		
		}
		else{	
		if(c>=10000) {
			printf("%llu = %llu + ... + %llu\n",n,a,b);
		}else{
			printf("%llu =",n);
			while(a<b){
				printf("%llu + ",a);
				a++;
			}
			printf("%llu\n",b);
		}
	}
	}
	else printf("-1\n");
}
	//system("pause");
	return 0;
 } 
