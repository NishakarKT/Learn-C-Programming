#include<stdio.h>
#include<stdlib.h>

int *func()
{
    int a=34;

    return &a; //address of a is return which can be stored in a pointer.
}

int main()
{
    int *ptr=func();  //ptr becomes a Dangling Pointer.

    printf("Address of ptr is %d\n", ptr);
    printf("Value at Address of ptr is %d\n", *ptr);

    system("PAUSE");
    return 0 ;
}