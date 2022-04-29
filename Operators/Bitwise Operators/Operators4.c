#include<stdio.h>
#include<stdlib.h>

int main()

{
    int a, b;

    printf("Enter Number 'a'\n");
    scanf("%d", &a);

    printf("Enter Number 'b'\n");
    scanf("%d", &b);

    printf("a & b = %d\n", a&b);
    printf("a | b = %d\n", a|b);
    printf("a ^ b = %d\n", a^b);
    printf(" ~ a = %d\n", ~a);
    printf(" ~ b = %d\n", ~b);
    printf("a << b = %d\n", a<<b);
    printf("a >> b = %d\n", a>>b);

    system("PAUSE");

    return 0;
}