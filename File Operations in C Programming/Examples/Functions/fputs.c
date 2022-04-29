#include <stdio.h>

int main()
{
    FILE *fptr = NULL;
    int n;
    char text[1000];

    fptr = fopen("sample.txt", "w");

    printf("Enter text : ");
    gets(text);
    printf("Number of repetitions : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        fputs(text, fptr);
        fputs("\n", fptr);
    }

    fclose(fptr);
    return 0;
}