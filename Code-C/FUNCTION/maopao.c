#include <stdio.h>

int main()
{
	int n, i, j,a[1024];
	scanf("%d", &n);
	int hold;
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n; i++)
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
		printf("%d ", a[i]);
	return 0;
}
