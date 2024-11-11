#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int mat[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d ", &mat[i][j]);
        }
    }
    // swap column
    for (int i = 0; i < n; i++)
    {
        int temp = mat[i][0];
        mat[i][0] = mat[i][m-1];
        mat[i][m-1] = temp;
    }

    // swap row
    for (int i = 0; i < m; i++)
    {
        int temp = mat[0][i];
        mat[0][i] = mat[n-1][i];
        mat[n-1][i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }


    return 0;
}