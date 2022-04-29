#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    FILE *ptr = NULL;
    char c, read[100];
    ptr=fopen("TestFile.txt", "r");


//reading 
    again:
    c=fgetc(ptr);
    if(c==EOF)
    {
        goto end;
    }
    printf("%c", c);
    goto again;
    end:
    printf("\n");
//reading


    fclose(ptr);

    system("PAUSE");
    return 0;
}