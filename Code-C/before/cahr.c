#include<stdio.h> 
#include<ctype.h> 
int main()
{ 
	char c; 
	while ((c = getchar()) != EOF) 
		{ 
			if (c=='-')
			{
				c = getchar(); 
				printf("%c",c-32); 
			} 
			else if (isupper(c)) 
			{ 
			c=tolower(c); 
			printf("-%c",c); 
			} 
			else printf("%c",c); 
		} 
		return 0; 
}
