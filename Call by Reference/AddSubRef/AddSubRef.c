#include<stdio.h>
#include<stdlib.h>

int AddSub(int*x,int*y)
{
    int c, d;
    c=*x+*y;
    d=*x-*y;
    *x=c;
    *y=d;
}

int main()
{
    int a, b;

    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    AddSub(&a,&b);
    printf("a = %d\nb = %d\n", a, b);

    system("PAUSE");
    return 0 ;
}