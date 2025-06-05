#include <stdio.h>
#define LEN 1000
int bin_find(int[], int, int, int);
int rec_bin_find(int[], int, int, int);
int count_find = 0;
int main()
{
    int a[LEN], key, result, i;
    // ... 输入数组a，输入查找关键字key

    result = rec_bin_find(a, key, 0, LEN - 1);
    // result = bin_find(a, key, 0, LEN-1);
    if (result != -1)
        printf("Found at [%d]", result);
    else
        printf("Key not found");
    printf("\nfind times: %d", count_find);
    return 0;
}

// binary find, recursive version
int rec_bin_find(int b[], int key, int low, int high)
{
    int mid;
    if (low > high)
        return -1;
    mid = (low + high) / 2;
    if (key == b[mid])
        return mid;
    else if (key < b[mid])
        return rec_bin_find(b, key, low, mid - 1);
    else
        return rec_bin_find(b, key, mid + 1, high);
}
// non-recursive version
int bin_find(int b[], int key,int low, int high)
{
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == b[mid])
            return mid;
        else if (key < b[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}