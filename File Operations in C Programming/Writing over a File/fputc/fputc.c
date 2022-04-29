#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *ptr = NULL;
    char c, write[100], read[100], read1[100];

    ptr=fopen("TestFile.txt", "r");
    fscanf(ptr, "%s", read);
    printf("Old text : %s\n", read);
    fclose(ptr);

    printf("New Text : ");
    gets(write);

    ptr = fopen("TestFile.txt", "w");
    for (int i = 0; i < strlen(write); i++)
    {
        c = write[i];
        fputc(c, ptr);
    }
    fclose(ptr);

    ptr=fopen("TestFile.txt", "r");
    fscanf(ptr, "%s", read1);
    fclose(ptr);
    printf("New Text entered is %s\n", read1);

    system("PAUSE");
    return 0;
}