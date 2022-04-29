#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, *ptra = &a;
    
    printf("Enter The Value To Be Stored In 'a'\n");
    scanf("%d", &a);

    printf("The Value Of 'a' Is %d\n", a);
    printf("The Value Of 'a' Is %d\n", *ptra);
    printf("The Address Of 'a' Is %x\n", ptra);
    printf("The Address Of 'Pointer To a' Is %p\n", ptra);
    printf("The Address Of 'a' Is %p\n", &a);

    system("PAUSE");
    return 0 ;

}