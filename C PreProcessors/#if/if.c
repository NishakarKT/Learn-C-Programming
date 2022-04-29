#include <stdio.h>
#include <stdlib.h>
#define x 50

int main()
{
#if x
    printf("'if' directive evaluates an expression provided  to determine if the code should be included in the cmopilation process.\n");
#endif  //ifdef, ifndef, if, else, elif etc are followed by endif.

    system("PAUSE");
    return 0;
}