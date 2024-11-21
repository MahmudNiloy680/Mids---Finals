#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int id[3];  
        string name[3];
        char section[3];
        int marks[3];

        for (int i = 0; i < 3; i++)
        {
            cin >> id[i] >> name[i] >> section[i] >> marks[i];
        }


        int max_mark = marks[0];
        int max_index = 0;

        for (int i = 1; i < 3; i++)
        {
            if (marks[i] > max_mark)
            {
                max_mark = marks[i];
                max_index = i;
            }
        }

        cout << id[max_index] << " " << name[max_index] << " " << section[max_index] << " " << marks[max_index] << endl;

    }
    return 0;
}