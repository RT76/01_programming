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
	puts("#include <stdlib.h>");
	puts("int main(){");
	// puts("FILE* fp = fopen("stdout.txt","r",stdout);");
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
	// puts("fclose(fp);");
	// puts("system("pause");");
	puts("return 0;");
	puts("}");
	freopen("CON", "r", stdin);
	freopen("CON", "w", stdout);
	system("pause");
	return 0;
}