#include<stdio.h>

int main()

{
	int score,originalScore;
	scanf("%d",&score);
	originalScore=score;
	score/=10;
	switch(score){
		case 10:
		case 9:
			printf("A\n");
			break;
		case8:
			printf("B\n");
			break;
		case7:
			printf("C\n");
			break;
		case6:
			printf("D\n");
			break;
		case5:
		case4:
		case3:
		case2:
		case1:
		case0:
			printf("E\n");
		default:
			printf("illeagal score:%d",originalScore);
	
	}
	system("pause");
	return 0;
}
