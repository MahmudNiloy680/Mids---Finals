// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int id[3];  
//         string name[3];
//         char section[3];
//         int marks[3];

//         for (int i = 0; i < 3; i++)
//         {
//             cin >> id[i] >> name[i] >> section[i] >> marks[i];
//         }


//         int max_mark = marks[0];
//         int max_index = 0;

//         for (int i = 1; i < 3; i++)
//         {
//             if (marks[i] > max_mark)
//             {
//                 max_mark = marks[i];
//                 max_index = i;
//             }
//         }

//         cout << id[max_index] << " " << name[max_index] << " " << section[max_index] << " " << marks[max_index] << endl;

//     }
//     return 0;
// }


//USING ARRAY OF OBJECT

#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int id;
    char name[105];
    char section;
    int marks;
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Student array[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> array[i].id >> array[i].name >> array[i].section >> array[i].marks;
        }

        Student max_mark = array[0];
        for (int i = 0; i < 3; i++)
        {
            if (array[i].marks > max_mark.marks)
            {
                max_mark = array[i];
            }
        }

        cout << max_mark.id << " " << max_mark.name << " " << max_mark.section << " " << max_mark.marks << endl;
    }
    return 0;
}