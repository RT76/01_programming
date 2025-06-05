#include<stdio.h>

 int main()  
 {
 	int price=0,bill=0;  /*初始化*/ 
 	printf("请分别输入实付金额和应付金额：\n");
 	scanf("%d%d",&bill,&price); /*读入金额*/ 
	if(bill>=price){printf("找您%d元\n",bill-price);} 
	else{printf("你的钱不够。\n"); }  /*判断并计算*/ 
    system("pause");
    return 0;
  } 
