#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(10, sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        printf("Enter Number %d : ", (i + 1));
        scanf("%d", &ptr[i]);
    }

    printf("Before Freeing Memory\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    printf("After Freeing Memory\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", ptr[i]);
    }

    system("PAUSE");
    return 0;
}