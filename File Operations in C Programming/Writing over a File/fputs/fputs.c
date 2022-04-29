#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *ptr;
    char write [100], read[100];

    ptr = fopen("TestFile.txt", "r");
    fgets(read, 100, ptr);
    printf("Old text : %s\n", read);
    fclose(ptr);

    ptr= fopen("TestFile.txt", "w");
    printf("Text to be Overwritten : ");
    gets(write);
    fputs(write, ptr);
    fclose(ptr);

    ptr = fopen("TestFile.txt", "r");
    fgets(read, 100, ptr);
    printf("Overwritten text : %s\n", read);
    fclose(ptr);

    system("PAUSE");
    return 0 ;
}