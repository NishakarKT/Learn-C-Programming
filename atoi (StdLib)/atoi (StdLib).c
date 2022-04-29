#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b;
    char str1[10], str2[10];

    printf("Enter Number 1 which is to be stored as a Character string : ");
    gets(str1);
    printf("Enter Number 1 which is to be stored as a Character string : ");
    gets(str2);

    a=atoi(str1); //atoi takes a string input and returns an integer.
    b=atoi(str2);

    printf("%d + %d = %d\n", a, b, a+b);

    system("PAUSE");
    return 0 ;
}