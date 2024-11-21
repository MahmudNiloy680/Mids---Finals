#include <bits/stdc++.h>
using namespace std;

int check_sum(int* a, int n, int s)
{
    int count = 0;

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[i] + a[j] + a[k] == s)
                {
                    count = 1;
                    break;
                }
            }
        }
    }

    return count;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, s;
        cin >> n >> s;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int count = check_sum(a, n, s);

        
        (count == 1) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}