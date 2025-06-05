#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int nums[50050];
int main()
{
    int n, i, j, hold;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    for (i = 0; i < n; i++)
        nums[i] = nums[i] * nums[i];
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n ; j++)
        {
            if (nums[i] > nums[j])
                hold = nums[i];
            nums[i] = nums[j];
            nums[j] = hold;
        }
        for(i = 0; i < n; i++)
        printf("%d ",&nums[i]);
}