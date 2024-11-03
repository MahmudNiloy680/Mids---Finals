#include <stdio.h>
int main()
{
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);

    if (x>y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int price;
        scanf("%d", &price);
        if (price >= x && price <= y)
        {
            count ++;
        }
    }
    printf("%d", count);
    
    return 0;
}