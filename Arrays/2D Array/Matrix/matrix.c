#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j, matrix[3][4] = {{2, 3, 4, 5}, 
                              {3, 4, 5, 6},    //Matrix.
                              {4, 5, 6, 7}};

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf(" Row %d, Column %d = %d\n", i, j, matrix[i][j]);
            if(j>=4)
            {break;}
        }
        if(i>=3)
        {break;}
    }
    system("PAUSE");
    return 0;
}