#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[100];

    printf("Enter name : ");
    scanf("%[^\n]%*c", &name);  // %[^\n]%*c helps in taking the name input (including spaces).

    printf("Welcome %s\n", name);

system("PAUSE");
return 0;
}