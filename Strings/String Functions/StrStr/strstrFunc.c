#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char text[1000], text1[1000], word[100];

    printf("Enter Text : ");
    gets(text);         //to consume 'enter' character.
    printf("Enter Word : ");
    gets(word);

    strcpy(text1,strstr(text, word));  //strstr returns thr string from the word till the end.

    printf("Text returned : %s\n", text1);

    system("PAUSE");
    return 0 ;
}