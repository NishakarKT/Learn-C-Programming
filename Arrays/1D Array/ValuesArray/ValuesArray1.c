#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, arr[5] = {1,2,3,4,5};

    for(i=0;i<5;i++)
    {
        printf("The value at memory location %d is %d\n", i, arr[i]);
        if(i>=5)
        {break;}
    }
    printf("\n");

    //OR

    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("The value at memory location %d is %d\n", i, *(&arr[i]));
        if(i>=5)
        {break;}
    }

system("PAUSE");
return 0;
}