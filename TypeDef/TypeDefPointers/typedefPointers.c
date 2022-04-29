#include<stdio.h>
#include<stdlib.h>

int main()
{
    //int* a, b;  //it will define a pointer 'a' and an integer 'b'.So we can use typedef like ...
    typedef int* ptr;

    ptr a, b;
    int c;

    c=100;
    a=&c;
    b=&c;  //NO ERROR ...       

    system("PAUSE");
    return 0 ;
}