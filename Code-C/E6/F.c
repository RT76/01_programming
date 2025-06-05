#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int isequal(int *cnt1, int *cnt2)
{
    for (int i = 0; i < 26; i++)
        if (cnt1[i] != cnt2[i])
            return 0;
    return 1;
} 
void checkInclusion(char *s1, char *s2)
{
    int len1 = strlen(s1), len2 = strlen(s2);
    if (len2 < len1)
    {
        printf("Single Forever!");
        return;
    } 
    int cnt1[26] = {};
    int cnt2[26] = {};
    for (int i = 0; i < len1; i++)
    {
        cnt1[s1[i] - 'a']++;
        cnt2[s2[i] - 'a']++;
    }
    if (isequal(cnt1, cnt2))
    {
        printf("65472");
        return;
    }
    for (int i = len1; i < len2; i++)
    {
        cnt2[s2[i] - 'a']++; 
        cnt2[s2[i - len1] - 'a']--;
        if (isequal(cnt1, cnt2))
        {
            printf("65472");
            return;
        }
    }
    printf("Single Forever!");
    return;
}
int main()
{
    char s1[100005], s2[100005]; 
    scanf("%s%s", s1, s2);
    checkInclusion(s1, s2);
}