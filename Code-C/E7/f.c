#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int n, m;
char s[105][105];
void dfs(int x, int y);
int main()
{ 
    int i, j, num = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        scanf("%s", s[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (s[i][j] == 'W')
            {
                dfs(i, j);
                num++;
            }
        }
    }
    printf("%d", num);
    return 0;
}
void dfs(int x, int y)
{
    s[x][y] = '*';
    for (int i = -1; i <= 1; i++)
    {
        for (int j = -1; j <= 1; j++)
        {
            int nx = x + i;
            int ny = y + j;
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && s[nx][ny] == 'W')
            {
                dfs(nx, ny);
            }
        }
    }
}