#include<stdio.h>
#include<stdlib.h>

int main()
{
    char file[100];
    FILE* ptr=NULL;

    ptr = fopen("TestFile.txt", "r");

    fscanf(ptr, "%s", file); //%s only takes input till a ' ' (SPACE).

    printf("The saved content is...\n%s\n", file);

    fclose(ptr);

    system("PAUSE");
    return 0 ;
}