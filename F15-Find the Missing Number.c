#include <stdio.h>
int main()
{
    int t;
    scanf("%d\n", &t);

    for (int i = 0; i < t; i++)
    {
        long long m;
        int a, b, c;
        scanf("%lld %d %d %d/n", &m, &a, &b, &c);

        long long rest = a * b * c;
        if (m % rest == 0)
        {
            long long frth_num = m / rest;

            printf("%lld\n", frth_num); 
        }
        else
        {
            printf("%d\n", -1);
        }
    }

    return 0;
}