#include<stdio.h>
#include<stdlib.h>

int add(int a, int b)
{
    return a+b;                    //'a' & 'b' are "FORMAL PARAMETERS".
                                   //'a' & 'b' are "LOCAL VARIABLES"(can be accessed only in the add() function). 
}

int main()
{
    int x=12, y=8;                 //'x' & 'y' are "ACTUAL PARAMETERS".
                                   //'x' & 'y' are "GLOBAL VARIABLES"(can be accessed from anywhere).

    printf("%d + %d = %d\n", x, y, add(x,y));

system("PAUSE");
return 0;
}