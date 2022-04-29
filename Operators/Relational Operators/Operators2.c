#include<stdio.h>
#include<stdlib.h>

int main()

{
    int a, b;
    
    printf("True = 1\nFalse = 0\n");
    
    printf("Enter Number a\n");
    scanf("%d", &a);

    printf("Enter Number b\n");
    scanf("%d", &b);

    printf("a is Equal to b %d\n", a==b);
    printf("a is Not Equal to b %d\n", a!=b);
    printf("a is Greater Than or Equal to b %d\n", a>=b);
    printf("a is Less Than or Equal to b %d\n", a<=b);
    printf("a is Greater Than b %d\n", a>b);
    printf("a is Less Than b %d\n", a<b);

    system("PAUSE");
    
    return 0;
    }