#include <bits/stdc++.h>
using namespace std;

bool customSort(pair<string, int> a, pair<string, int> b) 
{
    if (a.first == b.first) 
        return a.second > b.second;
    return a.first < b.first;
}

int main() 
{
    int n;
    cin >> n;

    vector<pair<string, int>> a;

    for (int i = 0; i < n; i++) 
    {
        string s;
        int num;
        cin >> s >> num;
        a.push_back({s, num});
    }

    sort(a.begin(), a.end(), customSort);

    for (auto p : a) 
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}
