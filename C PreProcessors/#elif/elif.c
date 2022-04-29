#include<stdio.h>
#include<stdlib.h>
#define x 50

int main()
{
    #if x > 50
    printf("x is allowed in the compilation process...\n");
    #elif x <=50
    printf("x is not allowed in the compilation process...\n");
    #endif

    system("PAUSE");
    return 0 ;
}