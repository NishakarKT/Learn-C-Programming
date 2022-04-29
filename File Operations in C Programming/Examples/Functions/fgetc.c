#include <stdio.h>

int main()
{
    char c;
    FILE *fptr = NULL;

    fptr = fopen("sample.txt", "r");

    // Assignment (=) returns the assigned value.
    while ((c = fgetc(fptr)) != EOF)
        printf("%c", c);

    fclose(fptr);

    return 0;
}