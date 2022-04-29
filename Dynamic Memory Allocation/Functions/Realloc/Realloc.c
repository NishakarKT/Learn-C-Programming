#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;

    ptr=(int*)malloc(10*sizeof(int)); // It is like an array  with 10 blocks of int(4 Bytes) >>> Total = 40 Bytes.

    for(int i=0;i<10;i++)
    {
        printf("Enter number %d : ", (i+1));
        scanf("%d", &ptr[i]);
    }

    ptr=(int*)realloc(ptr, 5*sizeof(int));
    
    for(int i=0;i<10;i++)
    {
        printf("%d\n", ptr[i]);  // You see garbage values at the end as you reallocated ptr with 10 memorylocations to just 5.
    }

    system("PAUSE");
    return 0 ;
}