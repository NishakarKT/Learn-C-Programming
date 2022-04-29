#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *ptr=NULL;
    char read[100], write[100];

    ptr=fopen("TestFile.txt", "r");

    fscanf(ptr, "%s", read);
    printf("Old Text : %s\n", read);
    fclose(ptr);

    printf("Enter extra text to be added : ");
    gets(write);

    ptr=fopen("TestFile.txt", "a");
    fprintf(ptr, "%s", write);
    fclose(ptr);

    ptr=fopen("TestFile.txt", "r");
    fscanf(ptr, "%s", read);
    printf("New Text : %s\n", read);

    fclose(ptr);
    
    system("PAUSE");
    return 0 ;
}