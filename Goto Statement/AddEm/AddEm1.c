#include<stdio.h>
#include<stdlib.h>

int main()
{
    float a, b;

    label:
    {
        printf("Enter a\n");
        scanf("%f", &a);
        printf("Enter b\n");
        scanf("%f", &b);

        printf("The sum is %f\n", a+b);

        system("PAUSE");
    }
    goto label;

    return 0;

}