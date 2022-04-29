#include<stdio.h>
#include<stdlib.h>

int sum(int a, int b)
{
    return a+b;
}

int main()
{
    int a, b;
    int (*ptr)(int, int);
    ptr=&sum;

    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    printf("Sum : %d\n", (*ptr)(a,b));

    system("PAUSE");
    return 0 ;
}