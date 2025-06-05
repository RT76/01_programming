#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char field[105][105] = {};
int M, N, count = 0;
void def(int k, int j)
{
    if (field[k - 1][j - 1] != '0' && field[k - 1][j - 1] != '*')
        field[k][j] = field[k - 1][j - 1];
    else if (field[k - 1][j] != '0' && field[k - 1][j] != '*')
        field[k][j] = field[k - 1][j];
    else if (field[k - 1][j + 1] != '0' && field[k - 1][j + 1] != '*')
        field[k][j] = field[k - 1][j + 1];
    else if (field[k][j - 1] != '0' && field[k][j - 1] != '*')
        field[k][j] = field[k][j - 1];
    else
    {
        field[k][j] = ++count + 48;
    }
}
void find()
{
    int k, j;
    for (k = 1; k <= N; k++)
    {
        for (j = 1; j <= M; j++)
        {
            if (field[k][j] == '*')
                continue;
            else if (field[k][j] == 'W')
                def(k, j);
        }
    }
}
int main()
{
    int i, j;
    scanf("%d%d", &N, &M);
    for (i = 0; i <= 104; i++)
    {
        for (j = 0; j <= 104; j++)
        {
            field[i][j] = '0';
        }
    }
    for (i = 1; i <= N; i++)
    {
        scanf("%s", &field[i][1]);
    }
    find();
    printf("%d", count);
    return 0;
}