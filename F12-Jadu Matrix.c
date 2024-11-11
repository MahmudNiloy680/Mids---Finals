#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d\n", &n, &m);

    if (n != m) //checking if square or not
    {
        printf("NO");
        return 0;
    }

    int mat[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int checkif = 1;

    //checking diagonals
    for (int i = 0; i < n; i++)
    {
        if (mat[i][i] != 1 || mat[i][n-i-1] != 1)
        {
            checkif = 0;
            break;
        }
    }

    //checking non diagonals
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j != i && j != n-i-1)
            {
                if (mat[i][j] != 0 )
                {
                    checkif = 0;
                    break;
                }
            }
        }        
    }

    if (checkif == 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    
    return 0;
}