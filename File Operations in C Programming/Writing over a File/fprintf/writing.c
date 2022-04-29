#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *ptr=NULL;
    char write[1000], read[1000], read1[1000];

    ptr=fopen("TestFile.txt", "r");
    fscanf(ptr, "%s", read);
    printf("Existing Content : %s\n", read);
    fclose(ptr);

    ptr=fopen("TestFile.txt", "w");
    printf("Content to be Rewritten : ");
    gets(write);
    fprintf(ptr, "%s", write);
    fclose(ptr);

    ptr=fopen("TestFile.txt", "r");
    fscanf(ptr, "%s", read1);
    printf("Existing Content : %s\n", read1);
    fclose(ptr);

    system("PAUSE");
    return 0 ;
}