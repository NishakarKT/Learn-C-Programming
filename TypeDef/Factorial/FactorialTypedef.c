#include<stdio.h>
#include<stdlib.h>

typedef unsigned long long int ulli; //Global Variable.

ulli factorial(ulli n)
{
    int i;
    ulli m=1;

    for(i=1;i<=n;i++)
    {
        m=m*i;
    }
    return m;
}

int main()
{
    ulli n;

    printf("Enter number to find its factorial : ");
    scanf("%llu", &n);

    printf("%llu ! = %llu\n", n, factorial(n));

    system("PAUSE");
    return 0 ;
}