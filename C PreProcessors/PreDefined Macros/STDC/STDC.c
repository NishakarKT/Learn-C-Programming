#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;

    a=__STDC__;

    if(a==1)
    {
        printf("Compiler compiles with ANSI standards.\n");
    }
    else
    {
        printf("Compiler does not compile with ANSI standards.\n");
    }

    system("PAUSE");
    return 0 ;
}