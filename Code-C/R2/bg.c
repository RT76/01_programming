#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int n, x, y, x2, y2;
char s[105][105];
void dfs(int x, int y);
int main()
{
    int i, j, num = 0;
    scanf("%d", &n);
    scanf("%d %d %d %d", &x, &y, &x2, &y2);
    for (i = 0; i < n; i++)
    {
        scanf("%s", s[i]);
    }
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         if (s[i][j] == 'W')
    //         {
    //             dfs(i, j);
    //             num++;
    //         }
    //     }
    // }
    // printf("%d", num);
    dfs(x, y);
    s[x][y] = 'G';
    for (i = 0; i < n; i++)
        puts(s[i]);
    return 0;
}
void dfs(int x, int y)
{
    int nx = x, ny = x;
    s[x][y] = 'S';
    for (int i = -1; i <= 1; i++)
    {
        for (int j = -1; j <= 1; j++)
        {
            if ((i == 0) || (j == 0))
            {
                nx = x + i;
                ny = y + j;
                if (nx >= 0 && nx < n && ny >= 0 && ny < n && s[nx][ny] == '0')
                {
                    dfs(nx, ny);
                }
            }
        }
        if ((nx == x2) && (ny == y2))
            break;
    }
}