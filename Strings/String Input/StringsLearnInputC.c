#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    char str[]="Nishakar Kumar", str1[15]={'N','i','s','h','a','k','a','r',' ','K','u','m','a','r','\0'};
    char text[1000], text1[1000], text2[1000];

    printf("Enter text 1 : "); // METHOD 1.
    gets(text);

    printf("Enter text 2 : "); // METHOD 2.
    scanf("%[^\n]%*c", &text1);

    printf("Enter text 3 : "); // METHOD 3.
    scanf("%s", &text2);

    

    printf("\n");

    printf("Text 1 : ");
    puts(text);
    printf("\n");
    printf("Text 2 : %s\n", text2);
    printf("Text 3 : %s\n", text1);

    printf("\n");

    printf("str1 : ");
    puts(str1);
    printf("str1 : ");
    for(i=0;;i++)
    {
        printf("%c", str1[i]);
        if(str1[i]=='\0')
        {
            break;
        }
    }
    printf("\n");
    

    system("PAUSE");
    return 0 ;
}