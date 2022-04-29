#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    double b;

    printf("Enter 'a' : ");
    scanf("%d", &a);
    printf("Enter 'b' : ");
    scanf("%lf", &b);

    void *ptr;
    ptr=&a;//Pointer points to the address of a.
    //printf("%d\n", *ptr); ERROR : Because you cant derefernce a void pointer.
    printf("The value of a is : %d\n", *(   (int*)ptr   )    );  //Correct Way.

    ptr=&b; //Now ptr points to the address of b.
    printf("The value of b is : %lf\n", *(   (double*)ptr   )   );

    system("PAUSE");
    return 0 ;
}