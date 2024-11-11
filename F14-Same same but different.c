#include <stdio.h>
#include <string.h>

int checker(char *s1, char *s2, char *s3)
{
    int len = strlen(s1);

    int count = 0;

    for (int i = 0; i < len; i++)
    {
        char ltr1 = s1[i];
        char ltr2 = s2[i];
        char ltr3 = s3[i];

        if (ltr1 == ltr2 && ltr2 == ltr3)
        {
            continue;
        }
        else if (ltr1 == ltr2 || ltr2 == ltr3 || ltr1 == ltr3)
        {
            count += 1;
        }
        else
        {
            count += 2;
        }

    }

    return count;
}



int main()
{
    char s1[110], s2[110], s3[110];

    scanf("%s %s %s\n", s1, s2, s3);   

    printf("%d\n", checker(s1, s2, s3));

    return 0;
}