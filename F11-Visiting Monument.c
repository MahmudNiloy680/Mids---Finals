#include <stdio.h>

int main()
{
    int t;
    scanf("%d\n", &t);

    for (int i = 0; i < t; i++)
    {
        int n; 
        scanf("%d\n", &n);

        for (int j = 0; j < n; j++)
        {
            printf("%d ", j + 1);
        }

        for (int j = n - 1; j > 0; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
    return 0;
}