#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b;

    printf("Non Zero = True(1)\nZero = False(0)\n");

    printf("Enter Number 'a'\n");
    scanf("%d", &a);

    printf("Enter Number 'b'\n");
    scanf("%d", &b);

    printf("a AND b = %d\n", a&&b);
    printf("a OR b = %d\n", a||b);
    printf("a NOT b = %d\n", !(a&&b));

    system("PAUSE");

    return 0;

}