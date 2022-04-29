#include <stdio.h>
#include <stdlib.h>
#define x 50

int main()
{
#if x
    printf("'if' directive evaluates an expression provided  to determine if the code should be included in the cmopilation process.\n");
#else
    printf("x is not included in the compilation process\n");
#endif

    system("PAUSE");
    return 0;
}