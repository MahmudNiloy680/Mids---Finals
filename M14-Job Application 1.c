#include <stdio.h>
int main()
{
    int n, ep;
    scanf("%d\n", &n);

    for (int i = 0; i < n; i++) 
    {
        scanf("%d\n", &ep);
        
        if (ep < 1)
        {
            printf("Entry-level candidate\n");
        }
        else if (ep >= 1 && ep <= 3)
        {
            printf("Junior candidate\n");
        }
        else if (ep >= 4 && ep <= 7)
        {
            printf("Mid-level candidate\n");
        }
        else if (ep > 7)
        {
            printf("Senior candidate\n");
        }
    }
    return 0;
}