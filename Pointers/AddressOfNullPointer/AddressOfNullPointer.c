#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;

    printf("NULL POINTER!!!\n");
    printf("press any key to display the details regarding NULL Pointer\n");
    system("PAUSE");
    
    printf("The Address of NULL Pointer is %p\n", &ptr);

    system("PAUSE");

    return 0 ;
}