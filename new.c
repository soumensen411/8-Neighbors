
#include <stdio.h>
int n, m;
int isvalid(int xx, int yy)
{
    if (xx >= 0 && xx < n && yy >= 0 && yy < m)
        return 1;
    else
        return 0;
}
int main()
{
    int i, j, x, y, f;
    char str[100][100];
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf(" %c", &str[i][j]);
        }
    }
    scanf("%d%d", &x, &y);
    x--, y--;
    f = 1;
    for (i = x - 1; i <= x + 1; i++)
    {
        for (j = y - 1; j <= y + 1; j++)
        {
            if (i == x && j == y)
                continue;
            if (isvalid(i, j))
                if (str[i][j] == '.')
                    f = 0;
        }
    }
    if (f == 1)
    {
        printf("yes\n");
    }
    else
        printf("no\n");
    return 0;
}
