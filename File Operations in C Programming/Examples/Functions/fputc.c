#include <stdio.h>

int main()
{
    char text[100];
    FILE *fptr = NULL;

    fptr = fopen("sample.txt", "w");

    printf("Enter text : ");
    gets(text);

    for (int i = 0; text[i]; i++)
        fputc(text[i], fptr);

    fclose(fptr);
    
    return 0;
}