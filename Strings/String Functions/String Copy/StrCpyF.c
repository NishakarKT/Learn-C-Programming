#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i;
    char str1[1000], str2[1000];

    printf("Enter String 1 : ");
    gets(str1);
    printf("Enter String 2 : ");
    gets(str2);

    for(i=0;;i++)
    {
        str2[i]=str1[i];
        if(str1[i]=='\0')
        {break;}
    }

    printf("String 2 after copying : %s\n", str2);
    printf("String 2 after copying using strcpy : %s\n", strcpy(str2,str1));

    system("PAUSE");
    return 0 ;
}