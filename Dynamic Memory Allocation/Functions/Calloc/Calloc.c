#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr=(int*)calloc(10,2);  //It creates an array of 10 integers in which size of each int is 2 bytes.

    for(int i=0;i<10;i++)
    {
        printf("Enter Number %d : ", (i+1));
        scanf("%d", &ptr[i]);
    }

    for(int i=0;i<10;i++)
    {
        printf("Number %d = %d\n", (i+1), ptr[i]);
    }

    system("PAUSE");
    return 0 ;
}