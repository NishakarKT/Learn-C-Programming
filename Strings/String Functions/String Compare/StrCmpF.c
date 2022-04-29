#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[1000], str2[1000];
    int a, i, strlen1 = 0, strlen2 = 0;

    printf("Enter String 1 : ");
    gets(str1);
    printf("Enter String 2 : ");
    gets(str2);

    for (i = 0; i < 999; i++)
    {
        a = 0;
        if (str1[i] != str2[i])
        {
            a = 1;
            break;
        }
        if ((str1[i] == '\0' && str2[i] != '\0') || (str1[i] != '\0' && str2[i] == '\0'))
        {
            a = 1;
            break;
        }
    }

    if (a == 0 || strcmp(str1, str2) == 0)
    {
        printf("Strings are Same.\n");
    }
    else if (a == 1 || strcmp(str1, str2) != 0)
    {
        printf("Strings are Different.\n");
    }

    system("PAUSE");
    return 0;
}