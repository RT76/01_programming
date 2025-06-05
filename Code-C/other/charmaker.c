#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#pragma warning(disable : 4996)
int main()
{
	FILE *fp = freopen("input.txt", "r", stdin);
	FILE *fp2 = freopen("output.txt", "w", stdout);
	char a[1024] = {0}, *p;
	puts("#include <stdio.h>");
	puts("main(){");
	for (;;)
	{
		if (fgets(a, 1024, stdin))
		{
			printf("puts(\"");
			for (p = a; *p; p++)
			{
				if (*p == '\\')
				{ // backslash
					putchar('\\');
					putchar('\\');
				}
				else if (*p == '\"')
				{ // char "
					putchar('\\');
					putchar('\"');
				}
				else if (*p == '\'')
				{ // char '
					putchar('\\');
					putchar('\'');
				}
				else
				{
					if (isprint(*p))
					{
						putchar(*p);
					}
				}
			}
			puts("\");");
		}
		else
		{
			break;
		}
	}
	puts("}");
	freopen("CON", "r", stdin);
	freopen("CON", "w", stdout);
	system("pause");
	return 0;
}