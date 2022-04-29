#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j, arr[2][3] = {{1,2,3},{4,5,6}};

    printf("VALUES AT DIFFERENT MEMORY LOCATIONS IN THE 2D ARRAY.\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("The value at memory location matrix%d%d = %d\n", i, j, arr[i][j]);
            if(i>=3)
            {break;}
        }
        if(i>=2)
        {break;}
    }

    printf("ADDRESSES OF DIFFERENT MEMORY LOCATIONS IN THE 2D ARRAY. (INT)\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("The Address of memory location arr%d%d = %d\n", i, j, &arr[i][j]);
            if(i>=3)
            {break;}
        }
        if(i>=2)
        {break;}
    }

    printf("ADDRESSES OF DIFFERENT MEMORY LOCATIONS IN THE 2D ARRAY. (HEXADECIMAL)\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("The Address of memory location arr%d%d = %x\n", i, j, &arr[i][j]);
            if(i>=3)
            {break;}
        }
        if(i>=2)
        {break;}
    }

system("PAUSE");
return 0;
}