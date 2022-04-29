#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;  //Uninitialized variable
    int *ptr=&a;

    //Pointer points to the address of an uninitialized variable and so it now becomes a Wild Pointer.

    printf("Address of the uninitialized variable is %d\n", &a);
    printf("The value at address of the Wild Pointer is : %d\n", *ptr); //Address remains the same.
    printf("The address of the Wild Pointer is : %d\n", ptr);  // A garabage value.

    //So always make a wild pointer null to avoid nasty bugs.

    ptr=NULL;

    printf("Address of the NULL Pointer converted is %d\n", ptr);

/*  int a = 335;

    int*ptr;
    *ptr=35; //this can impart bugs in your program.
    //So always make your pointers null..never leave them uninitialized (Wild Pointer).

    //printf("Value at the pointer address is %d\n", *ptr);

    ptr=&a; //ptr is no longer a wild pointer
*/

    system("PAUSE");
    return 0;
}