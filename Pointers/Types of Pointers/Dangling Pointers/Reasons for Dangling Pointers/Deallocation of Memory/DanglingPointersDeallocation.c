#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    
    ptr=(int*)malloc(sizeof(int));
    *ptr=15;

    printf("The address of pointer is : %d \n", ptr);
    printf("The value at the above address of the pointer is : %d \n", *ptr);
   

    free(ptr); //ptr now becomes a dangling pointer.

    printf("The address of the Dangling pointer is : %d\n", ptr); //Same address
    printf("The value at the address of the Danglng pointer is : %d \n", *ptr); // A garbage value.

    ptr=NULL; //ptr now becomes a NULL Pointer.

    printf("The address of the NULL pointer is : %d \n", ptr); //Address shows '0' which is defined by this compiler.
    printf("The value at the address of the NULL pointer is : %d \n", *ptr); //Crashes

    system("PAUSE");
    return 0 ; 
}