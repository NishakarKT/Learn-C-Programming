#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c;

    printf("Enter Number a\n");
    scanf("%d", &a);

    printf("Enter Number b\n");
    scanf("%d", &b);

    printf("Enter Number c\n");
    scanf("%d", &c);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    if(a>b&&b>c)
    {printf("The Order Is a>b>c\n");}

    else if(a>c&&c>b)
    {printf("The Order Is a>c>b\n");}

    else if(b>a&&a>c)
    {printf("The Order Is b>a>c\n");}

    else if(b>c&&c>a)
    {printf("The Order Is b>c>a\n");}

    else if(c>b&&b>a)
    {printf("The Order Is c>b>a\n");}

    else if(c>a&&a>b)
    {printf("The Order Is c>a>b\n");}

    system("PAUSE");

    return 0 ;
}