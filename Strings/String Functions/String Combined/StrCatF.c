#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j;
    char str1[1000], str2[1000];

    printf("Enter String 1 : ");
    gets(str1);
    printf("Enter String 2 : ");
    gets(str2);

    printf("Combined String : %s\n", strcat(str1,str2));

    system("PAUSE");
    return 0;
}