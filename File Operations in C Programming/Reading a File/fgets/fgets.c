#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *ptr=NULL;
    char read[100];

    ptr=fopen("TestFile.txt", "r");
    fgets(read, 100, ptr);  //Here 100 implies the number of chracters of the file you want to copy in read string.
    fclose(ptr);

    printf("The text stored : %s\n", read);
    
    system("PAUSE");
    return 0 ;
}