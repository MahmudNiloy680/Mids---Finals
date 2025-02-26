#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> shift = {{-1, -2}, {-2, -1}, {-1, 2}, {-2, 1}, {1, 2}, {2, 1}, {1, -2}, {2, -1}};

int n, m;
int dst[105][105];

bool valid(int x, int y)
{
    return (x >= 0 && y >= 0 && x < n && y < m && dst[x][y] == -1);
}

int KnightMoves(int kx, int ky, int qx, int qy)
{
    if (kx == qx && ky == qy)
        return 0;

    queue<pair<int, int>> q;
    q.push({kx, ky});

    dst[kx][ky] = 0;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 8; i++)
        {
            int new_x = x + shift[i].first;
            int new_y = y + shift[i].second;

            if (valid(new_x, new_y))
            {
                dst[new_x][new_y] = dst[x][y] + 1;

                if (new_x == qx && new_y == qy)
                    return dst[new_x][new_y];

                q.push({new_x, new_y});
            }
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int kx, ky, qx, qy;
        cin >> n >> m >> kx >> ky >> qx >> qy;

        memset(dst, -1, sizeof(dst));

        cout << KnightMoves(kx, ky, qx, qy) << endl;
    }
    return 0;
}
