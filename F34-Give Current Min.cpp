#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, q;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> min_heap;

    for (int i = 0; i < n; i++) 
    {
        int x;
        cin >> x;
        min_heap.push(x);
    }

    cin >> q;

    while (q--) 
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0) 
        {
            int x;
            cin >> x;
            min_heap.push(x);
            cout << min_heap.top() << endl; 
        }

        else if (cmd == 1) 
        {
            if (min_heap.empty()) 
                cout << "Empty" << endl;
            else 
                cout << min_heap.top() << endl;
        }

        else if (cmd == 2) 
        {
            if (min_heap.empty()) 
                cout << "Empty" << endl;

            else 
            {
                min_heap.pop();

                if (min_heap.empty()) 
                    cout << "Empty" << endl; 
                else 
                    cout << min_heap.top() << endl;
            }
        }
    }

    return 0;
}
