#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;

    { //Curly Braces indicate starting and ending of a scope (region) where its local variable exist and beyond which they don't.
        int i=5;
        ptr=&i;
    }
    //ptr nowbecomes a damgling pointer as it stores the address of i but whose scope has already end and now it points to a destroyed memory loctation.

    printf("Address of the Dangling Pointer is %d\n", ptr);
    printf("Value at Address of the Dangling Pointer is %d\n", *ptr);

    system("PAUSE");
    return 0 ; 
}