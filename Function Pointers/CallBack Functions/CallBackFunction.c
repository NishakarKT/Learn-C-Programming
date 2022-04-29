#include<stdio.h>
#include<stdlib.h>

int sum(int a, int b)
{
    return a+b;
}

void GreetMorningAndExecute(int (*ptr)(int, int))
{
    printf("Good Morning!!!\n");
    printf("Sum : %d\n", ptr);
}

void GreetHelloAndExecute(int (*ptr)(int, int))
{
    printf("Hello User !!!\n");
    printf("Sum : %d\n", ptr);
}

int main()
{
    int a, b;
    int (*ptr)(int, int);
    ptr=sum; //or ptr = &sum (same results)
    
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    GreetMorningAndExecute(ptr(a,b));
    GreetHelloAndExecute(ptr(a,b));

    system("PAUSE");
    return 0 ;
}