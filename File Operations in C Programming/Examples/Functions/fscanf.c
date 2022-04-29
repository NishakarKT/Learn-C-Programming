#include <stdio.h>

int main()
{
    FILE *fptr = NULL;
    char text[1000];

    fptr = fopen("sample.txt", "r");

    //fscanf doesnt read ' ', '\n', '\t.
    while (fscanf(fptr, "%s", text) != EOF)
        printf("%s", text);

    return 0;
}