#include<stdio.h>
#include<stdlib.h>

int sum(int a, int b)           //Declaration.
{return a+b;}
int main()
{
    int a, b, c;
    
    printf("Enter a\n");
    scanf("%d", &a);
    printf("Enter b\n");
    scanf("%d", &b);
    c=sum(a, b);                 //Call
    printf("The Sum Is %d\n", c);  
}
//Function With Arguments And Return Value.