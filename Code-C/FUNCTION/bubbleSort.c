#include <stdio.h>
void bubbleSort(int a[], int n);
int main()
{
	int n, i, a[1024] = {0};
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	bubbleSort(a, n);
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
		return 0;
}
void bubbleSort(int a[], int n)
{
	int i, j, hold, flag;
	for (i = 0; i < n - 1; i++)
	{
		flag = 0;
		for (j = 0; j < n - 1 - i; j++)
			if (a[j] > a[j + 1])
			{
				hold = a[j];
				a[j] = a[j + 1];
				a[j + 1] = hold;
				flag = 1;
			}
		if (0 == flag)
			break;
	}
}