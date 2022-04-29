#include <stdio.h>
#include <stdlib.h>

void strCopy(char *str1, const char *str2)
{
    while (1)
    {
        *str1++ = *str2++;
        if (!*str2)
        {
            *str1 = '\0';
            break;
        }
    }
}

int strCmp(char *str1, char *str2)
{
    while (*str1 && *str2)
    {
        if (*str1 < *str2)
            return -1;
        else if (*str1 > *str2)
            return 1;
        str1++;
        str2++;
    }
    if (!*str1 && !*str2)
        return 0;
    else if (!*str1)
        return -1;
    else
        return 1;
}

int strLen(char *str)
{
    for (int i = -1;; str++, i++)
        if (!*str)
            return i;
}

char *strCat(char *str1, char *str2)
{
    char *str;
    str = (char *)malloc((strLen(str1) + strLen(str2) + 1) * sizeof(char));

    while (*str1)
        *str++ = *str1++;

    while (*str2)
        *str++ = *str2++;

    *str = '\0';
    strCopy(str1, str);
    printf("%s\n", str);
    return str1;
}

void printstr(char *str)
{
    for (int i = 0; *str; str++)
        printf("%c", *str);
    printf("\n");
}

int main()
{
    char str1[100] = "Hello";
    char str2[100] = "Hello";
    char str3[100];

    // printstr(str1);
    // printf("StrLen = %d\n", strLen(str1));

    // strCopy(str3, str1);
    // printstr(str3);

    printf("%d\n", strCmp(str1, str2));

    return 0;
}