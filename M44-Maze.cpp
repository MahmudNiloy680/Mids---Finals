#include <bits/stdc++.h>
using namespace std;

char maze[1005][1005];
bool vis[1005][1005];
pair<int, int> parent[1005][1005];

pair<int, int> shift[4] = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int n, m, src_x, src_y, dst_x, dst_y;

bool valid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}

void bfs()
{
    queue<pair<int, int>> q;
    q.push({src_x, src_y});
    vis[src_x][src_y] = true;

    bool found = false;

    while (!q.empty())
    {
        int x = q.front().first, y = q.front().second;
        q.pop();

        if (x == dst_x && y == dst_y)
        {
            found = true;
            break;
        }

        for (int i = 0; i < 4; i++)
        {
            int nx = x + shift[i].first, ny = y + shift[i].second;

            if (valid(nx, ny)  && maze[nx][ny] != '#' && !vis[nx][ny])
            {
                vis[nx][ny] = true;
                q.push({nx, ny});
                parent[nx][ny] = {x, y};
            }
        }
    }

    if (!found)
        return;

    int x = dst_x, y = dst_y;

    while (x != src_x || y != src_y)
    {
        int px = parent[x][y].first;
        int py = parent[x][y].second;

        if (maze[px][py] != 'R')
            maze[px][py] = 'X';
        
        x = px;
        y = py;
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> maze[i][j];

            if (maze[i][j] == 'R')
            {
                src_x = i;
                src_y = j;
            }
            if (maze[i][j] == 'D')
            {
                dst_x = i;
                dst_y = j;
            }
        }
    }

    bfs();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }
    return 0;
}
