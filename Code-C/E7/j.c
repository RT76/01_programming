#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct treenode
{
    int data, l, r;
} treenode;
treenode nodes[2048] = {0};
void dfs1(int root)
{
    if (nodes[root].data)
    {
        printf("%d ", nodes[root].data);
    }
    if (nodes[root].l)
    {
        dfs1(nodes[root].l);
    }
    if (nodes[root].r)
    {
        dfs1(nodes[root].r);
    }
    else
        return;
}
void dfs2(int root)
{
    if (nodes[root].data)
    {
        dfs2(nodes[root].l);
        printf("%d ", nodes[root].data);
        dfs2(nodes[root].r);
    }
    else
        return;
}
void dfs3(int root)
{
    if (nodes[root].data)
    {
        dfs3(nodes[root].l);
        dfs3(nodes[root].r);
        printf("%d ", nodes[root].data);
    }
    else
        return;
}
int main()
{
    int i, n;
    scanf("%d", &n);
    for (i = 1; i < (1 << (n - 1)); i++)
    {
        nodes[i].l = i << 1;
        nodes[i].r = (i << 1) | 1;
    }
    for (i = 1; i < (1 << n); i++)
    {
        scanf("%d", &nodes[i].data);
    }
    dfs1(1);
    printf("\n");
    dfs2(1);
    printf("\n");
    dfs3(1);
    printf("\n");
    return 0;
}
