#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    //Use of malloc
    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));  //Works just Like an array.

    for (i = 0; i < 12; i++)
    {
        printf("Enter Number %d : ", (i+1));
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < 12; i++)
    {
        printf("%d\n", ptr[i]);
    }

    system("PAUSE");
    return 0;
}