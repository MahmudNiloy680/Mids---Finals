#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        list<int> l;
        while(n--)
        {
            int x;
            cin >> x;
            l.push_back(x);
        }

        l.sort();
        l.unique();

        for (int x : l)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}