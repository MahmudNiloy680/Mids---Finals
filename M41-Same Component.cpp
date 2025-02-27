#include<bits/stdc++.h>
using namespace std;

char mat[1005][1005];
char wall = '-', room = '.';
bool vis[1005][1005];

vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
int n, m;

bool valid(int i, int j)
{
    if(i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;

    for(int i=0;i<4;i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if(valid(ci,cj) && !vis[ci][cj])
            if (mat[ci][cj] != wall)
                dfs(ci,cj);
    }
}

int main()
{
    cin >> n >> m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> mat[i][j];
        }
    }

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    memset(vis,false,sizeof(vis));
    dfs(si,sj);

    if (vis[di][dj])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}