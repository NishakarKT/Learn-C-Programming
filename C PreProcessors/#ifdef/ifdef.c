#include<stdio.h>
#include<stdlib.h>
#define x 50

int main()
{
    int a;

    #ifdef x
    printf("x is defined...\n");
    #endif

    system("PAUSE");
    return 0 ;
}