#include <bits/stdc++.h>
using namespace std;
int val[1005], w[1005];
int dp[1005][1005];

int backpack(int i, int max_w)
{
    if (i < 0 || max_w <= 0)
        return 0;

    if (dp[i][max_w] != -1)
        return dp[i][max_w];

    if (w[i] <= max_w)
    {
        int op1 = backpack(i - 1, max_w - w[i]) + val[i];
        int op2 = backpack(i - 1, max_w);
        dp[i][max_w] = max(op1, op2);
        return dp[i][max_w];
    }
    else
    {
        dp[i][max_w] = backpack(i - 1, max_w);
        return dp[i][max_w];
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, max_w;
        cin >> n >> max_w;

        for (int i = 0; i < n; i++)
            cin >> w[i];

        for (int i = 0; i < n; i++)
            cin >> val[i];
    
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= max_w; j++)
                dp[i][j] = -1;

        cout << backpack(n - 1, max_w) << endl;
    }
    return 0;
}