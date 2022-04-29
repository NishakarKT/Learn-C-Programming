#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *ptr=NULL;
    char read[1000], write[1000];

    ptr=fopen("NewFile.txt", "a+");  //Creates a new file if the file name doesn't exist.
    printf("Content to be added : ");
    gets(write);
    fprintf(ptr, "%s", write);
    fclose(ptr);

    ptr=fopen("NewFile.txt", "r");
    fscanf(ptr, "%s", read);
    printf("New Content : %s\n", read);
    fclose(ptr);

    system("PAUSE");
    return 0 ;
}