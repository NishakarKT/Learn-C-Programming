#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a = 34, * ptra = &a;

    // '+' Operator.
    
    printf("%d\n", ptra);
    printf("%d\n", ptra+1);   
    printf("%d\n", ptra+2);
    printf("%d\n", ptra+3);
    printf("%d\n", ptra+4);
    printf("%d\n", ptra+5);

//Output value increases by '4' and not by '1'.
//This happened because the value increases by '1' size of int.
//In my architecture size of int is 4 bytes.
  
// '-' operator.

    printf("%d\n", ptra);
    printf("%d\n", ptra-1);   
    printf("%d\n", ptra-2);
    printf("%d\n", ptra-3);
    printf("%d\n", ptra-4);
    printf("%d\n", ptra-5);

//Output value decreases by '4' and not by '1'.
//This happened because the value decreases by '1' size of int.
//In my architecture size of int is 4 bytes.

system("PAUSE");
return 0 ;
}