#include <stdio.h>
int book[10000000];
int main()
{
    int n;
    int t;
    scanf("%d %d\n", &n, &t);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &book[i]);
    }
    long long time = 0;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        time += book[i];
        if (time <= t)
        {
            counter ++;
        }
        else
        {
            break;
        }
    }
    printf("%d\n", counter);
    
    return 0;

}