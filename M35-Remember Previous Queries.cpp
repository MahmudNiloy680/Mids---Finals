#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist;
    int q, x, v;
    cin >> q;

    while (q--)
    {
        cin >> x >> v;
        if (x == 0)
        {
            mylist.push_front(v);
        }
        else if (x == 1)
        {
            mylist.push_back(v);
        }
        else if (x == 2)
        {
            int len = mylist.size();
            if (v < len)
            {
                mylist.erase(next(mylist.begin(), v));
            }
        }

        cout << "L -> ";
        for (auto i : mylist)
        {
            cout << i << " ";
        }
        cout << endl;

        mylist.reverse();
        cout << "R -> ";

        for (auto i : mylist)
        {
            cout << i << " ";
        }
        cout << endl;

        mylist.reverse();
    }

    return 0;
}