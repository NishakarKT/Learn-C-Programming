#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i;
    char str1[1000], str2[1000];

    printf("Enter String : ");
    gets(str1);

    for(i=0;i<strlen(str1);i++)
    {
        str2[(strlen(str1)-i-1)]=str1[i];
        if(str1[i]=='\0')
        {break;}
    }

    printf("Rversed String : %s\n", str2);
    printf("Rversed String : %s\n", strrev(str1));

    system("PAUSE");
    return 0 ;
}