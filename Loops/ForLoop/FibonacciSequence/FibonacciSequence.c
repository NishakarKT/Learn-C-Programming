#include<stdio.h>
#include<stdlib.h>

int main() //Iterate Method
{
    int i, n, a=0, b=1, c;
    
    printf("FIBONACCI SEQUENCE!\nHow many members of the Fibonacci Sequence do you want to display\?\n");
    scanf("%d", &n);
    
    if(n==1)
    {printf("0\n");}
    else if(n==2)
    {printf("0\n1\n");}
    else
    {
    printf("0\n");
    for(i=2;i<=n;i++)
    {
        
        c=(a+b);
        printf("%d\n", c);
        if(i>n)
        {break;}
        a=b;
        b=c;
    }
    }
    system("PAUSE");
    return 0 ;
}