#include<stdio.h>
#include<stdlib.h>

int main()
{
    char string[100];

    printf("Enter text : ");
    scanf("%s", &string);

    printf("Text : %s\n", string);
    
    system("PAUSE");
    return 0 ;
}