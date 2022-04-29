#include<stdio.h>
#include<stdlib.h>

int fib_iterative(int n)
{
    int i, a=0, b=1;

    for(i=1;i<=n;i++)
    {
        b=b+a;   
        a=b-a;
        if(i>n)
        {break;}
    }
    return a;
}

int fib_recursive(int n)
{
    if(n==1)
    {return 0;}
    if(n==2)
    {return 1;}
    else
    {return (fib_recursive(n-1)+fib_recursive(n-2));}
}

int main()
{
    int n, i;

    printf("How many members of the Fibonacci Series do you want to display.\n");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++)  //Recursive.
    {
        printf("%d ", fib_recursive(i));
        if(i>n)
        {break;}
    }

    printf("\n\n\n");

    if(n==1)
    printf("0 ");
    
    else if(n>1)
    {   printf("0 ");
        for(i=1;i<n;i++)  //Iterative.
    {
        printf("%d ", fib_iterative(i));
        if(i>=n)
        {break;}
    }
    printf("\n");
    }

system("PAUSE");
return 0;
}