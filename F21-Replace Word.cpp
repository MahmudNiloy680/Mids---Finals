#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, x;
        cin >> s >> x;

        int len_s = s.size();
        int len_x = x.size();

        for (int i = 0; i <= (len_s - len_x) ; i++)
        {
            int check_x = 0;
            for (int j = 0, k = i; j < len_x; j++, k++)
            {
                if (s[k] != x[j])
                {
                    check_x = 0;
                    break;
                }
                else
                {
                    check_x = 1;
                }
            }

            if (check_x == 1)
            {
                s.replace(i, len_x, "#");
            }

        }
        cout << s << endl;
    }
    return 0;
}