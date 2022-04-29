#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 34;
    int *ptr = NULL;

    /*
    ptr=NULL;
    printf("The value of address of a Null Pointer is : %d\n", ptr); //The address of a Null Pointer as defined by most of the Compilers. 
    */ 
    //printf("Value inside a Null P[ointer is %d\n", *ptr);  //The program crashes as a value inside a null pointer is undefined.
    
    if(ptr!=NULL)  //NULL Pointer can be used in the if else statement conditions.
    {
        printf("The value at the address of the pointer is %d\n", *(ptr));
    }
    else 
    {
        printf("It's a Null Pointer and the value inside it is not defined...\n");
    }

    system("PAUSE");
    return 0;
}