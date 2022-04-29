#include<stdio.h>
#include<stdlib.h>

int main()
{
    float a, b;

    printf("Enter Number 'a'\n");
    scanf("%f", &a);

    printf("Enter Number 'b'\n");
    scanf("%f", &b);

    printf("a/b = %0.3f\n", a/b);

    system("PAUSE");

    return 0;

}