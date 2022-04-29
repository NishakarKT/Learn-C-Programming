# include <stdio.h>

int main()
{
    FILE *fptr = NULL;
    char text[1000];

    fptr = fopen("sample.txt", "r");

    while(fgets(text, 1000, fptr) != NULL)
        printf("%s\n", text);

    fclose(fptr);

    return 0 ;
}