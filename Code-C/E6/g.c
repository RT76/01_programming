#include <stdio.h>
#include <string.h>
#define NUM 21
char a[25][55] = {{"Captain America"},{"Daredevil"}, {"Iron Man"}, {"Thor"}, {"Black Widow"}, {"Deadpool"}, {"Hulk"}, {"Thing"}, {"HumanTorch"}, {"Scarlet Witch"}, {"Wolverine"}, {"Storm"}, {"Spiderman"}, {"Punisher"}, {"Emma Frost"}, {"Wong"}, {"The Amazing Spider-man"}, {"Wanda Maximoff"}, {"Doctor Strange"}, {"Moon Knight"}, {"ShangChi"}};
char input[30];
int div(int n)
{
    int i, rem = 0;
    for (i = 0; i < n; i++)
    {
        rem = (rem * 10 + input[i] - '0') % NUM;
    }
    return rem;
}
int main()
{
    int i, j, k;
    while (scanf("%s", input) != EOF)
        printf("%s\n", a[div(strlen(input))]);
    return 0;
}