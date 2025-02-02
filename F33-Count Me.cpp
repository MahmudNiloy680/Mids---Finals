#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);

        map<string, int> m;
        stringstream ss(s);
        string word;

        int count = 0;
        string mx_word;

        while (ss >> word)
        {
            m[word]++;

            if (m[word] > count)
            {
                count = m[word];
                mx_word = word;
            }
        }
        cout << mx_word << " " << count << endl;
    }
    return 0;
}
