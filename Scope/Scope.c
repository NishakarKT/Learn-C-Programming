#include <stdio.h>
#include <stdlib.h>

int main()
{
    {
        int a;

        printf("Enter a : ");
        scanf("%d", &a);
    }

    printf("The value of a is %d\n", a); //it shows an error as a cant be used out of its scope which is defined by the curly braces.

    system("PAUSE");
    return 0;
}