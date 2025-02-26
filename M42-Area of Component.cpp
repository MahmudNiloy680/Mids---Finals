#include<bits/stdc++.h>
using namespace std;

char grid[1005][1005];
char unavailable = '-';
bool vis[1005][1005];

vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
int n, m;
vector<int> area;

bool valid(int i, int j)
{
    if(i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

int dfs(int si, int sj)
{
    vis[si][sj] = true;
    int count = 1;

    for(int i=0;i<4;i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if(valid(ci,cj) && !vis[ci][cj])
            if (grid[ci][cj] != unavailable)
                count += dfs(ci,cj);
    }
    return count;
}

int main()
{
    cin >> n >> m;

    for(int i=0;i<n;i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    memset(vis, false, sizeof(vis));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] != unavailable && !vis[i][j])
            {
                int components = dfs(i,j);
                if (components > 0)
                {
                    area.push_back(components);
                }
            }
        }
    }

    if (!area.empty())
    {
        sort(area.begin(), area.end());
        cout << area.front() << endl;
    }
    else
        cout << -1 << endl;
    return 0;
}