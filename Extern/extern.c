#include<stdio.h>
#include<stdlib.h>

int sum=343;  //Local variable is preffered over a global variable but if we want to use the external global variable.. we use exter keyword.

int add(int a, int b)
{
    //int sum;
    //sum=a+b;

    extern int sum;
    return sum;
}

int main()
{
    int a, b;

    printf("Enter number 1 : ");
    scanf("%d", &a);
    printf("Enter number 2 : ");
    scanf("%d", &b);

    printf("Sum is %d\n", add(a,b));

    system("PAUSE");
    return 0 ;
}