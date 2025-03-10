#include <bits/stdc++.h>
using namespace std;

int dp[100000 + 5];

bool fn(int i, int n)
{
    if (i == n)
        return true;
    if (i > n)
        return false;

    if (dp[i] != -1)
        return dp[i];

    dp[i] = fn(i + 3, n) || fn(i * 2, n);
    return dp[i];
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        memset(dp, -1, sizeof(dp));
        cout << (fn(1, n) ? "YES" : "NO") << endl;
    }

    return 0;
}