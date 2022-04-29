#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, *ptra = &a;
    
    printf("%d\n", ptra);
    
    // '++' Opeartor.

    ptra++;
    printf("%d\n", ptra);
    ptra--;

    // '--' Operator.

    ptra--;
    printf("%d\n", ptra);

system("PAUSE");
return 0;
}