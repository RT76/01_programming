#include<stdio.h>
int main()
{
	int year,isPrimeYear;
	scanf("%d",&year);
	if(year%100!=0){
		if(year%4==0){
			isPrimeYear=1;
		}else isPrimeYear=0;
	}else if(year%400!=0){
		isPrimeYear=0;
	}else isPrimeYear=1;
	printf("%d\n",isPrimeYear);
	return 0;
 } 
