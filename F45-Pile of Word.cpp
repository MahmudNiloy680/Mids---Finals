#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int freq[26] = {0};
        string s1, s2;
        cin >> s1 >> s2;

        if (s1.size() != s2.size())
        {
            cout << "NO" << endl;
            continue;
        }

        for (char i : s1)
            freq[i - 'a']++;

        for (char i : s2)
        {
            if (freq[i - 'a'] == 0)
                break;
            else
                freq[i - 'a']--;
        }
        int sum = 0;
        for (int i : freq)
            sum += i;

        cout << ((sum == 0) ? "YES" : "NO") << endl;
    }
    return 0;
}