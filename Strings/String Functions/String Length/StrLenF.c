#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i, len=0;
    char str1[1000];

    printf("Enter String : ");
    gets(str1);

    for(i=0;;i++)
    {
        if(str1[i]=='\0')
        {break;}
        len++;

    }

    printf("Length : %d ", len);
    printf("Length : %d ", strlen(str1));
    printf("\n");

    system("PAUSE");
    return 0;
}