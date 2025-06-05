#include <stdio.h>

int main()
{
	int n, i, j;
	scanf("%d", &n);
	double hold, a[n];
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 1; i < n; i++)
		for (j = 1; j < n - i + 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				hold = a[j];
				a[j] = a[j + 1];
				a[j + 1] = hold;
			}
		}

	for (i = 0; i < n; i++)
		printf("%d\n", a[i]);
	return 0;
}
