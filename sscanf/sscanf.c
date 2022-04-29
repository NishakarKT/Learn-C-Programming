#include<stdio.h>
#include<stdlib.h>

int main()
{
    char char1[6]="12345", char2[6]="54321";
    int a, b;

    printf("Value in char1 is : %s\n", char1);
    printf("Value in char2 is : %s\n", char2);
    
    sscanf(char1, "%d", &a);
    sscanf(char2, "%d", &b);

    printf("Sum : %d\n", a+b);

    system("PAUSE");
    return 0 ;
}