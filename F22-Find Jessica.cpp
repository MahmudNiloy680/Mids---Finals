#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string name;

    while(ss >> name)
    {
        if  (name ==  "Jessica")
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}