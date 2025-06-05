#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
int main()
{
	srand(time(0));
	int number,count,a;
	number=rand()%100+1,count=0,a=0;
	printf("\n\n这是一个猜数游戏\n");
	printf("我们已经想好了一个1到100的数\n");
	do{
		printf("请输入你猜的数：");
		scanf("%d",&a);
		count++;
		if(a>number){
			printf("你猜的数大了\n"); 
		} else if(a<number){
			printf("你猜的数小了\n");
		}
	} while (a!=number);
	printf("太好了，你用了%d次就猜到了答案：%d\n",count,number);
	system("pause");
	return 0;
 } 
