#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int cmpfunc(const void *a, const void *b);
int main()
{
	// while (~getint())

	int n, i;
	int a[1024];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	qsort(a, n, sizeof(int), cmpfunc);
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}
int cmpfunc(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}
