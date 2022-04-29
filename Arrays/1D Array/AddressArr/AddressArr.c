#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j, arr[5];

    for(i=0;;i++)
    {
        for(i=0;i<=4;i++)
    {
        printf("Enter value for memory location %d\n", i+1);
        scanf("%d", &arr[i]);
        if(i>4)
        {break;}
    }

    printf("The Array is ");
    for(i=0;i<=4;i++)
    {
        printf("%d ", arr[i]);
        if(i>4)
        {break;}
    }
    printf("\n");
    
    for(i=0;;i++)
    {
    printf("Enter the memory location number whose address you want.\n");
    printf("Enter '-1' to reset the array.\n");
    scanf("%d", &j);
    printf("The address of memory location : %d is %d\n", j, &arr[j-1]);
    
    if(j == -1)
    {break;}
    }
    
    }

system("PAUSE");
return 0;
}