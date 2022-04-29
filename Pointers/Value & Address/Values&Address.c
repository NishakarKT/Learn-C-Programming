#include<stdio.h>
#include<stdlib.h>

int main()  // Pointers.
{
    int a;
    int* ptra = &a;

    printf("Enter the value of 'a'\n");
    scanf("%d", &a);

  //printf("The value of 'a' is %d\n", a);

  //printf("The Address of 'a' is %x\n", ptra);   //The address is a Hexadecimal number.

  //printf("The Value of 'a' is %d\n", *ptra);  

    system("PAUSE");
    return  0;
}