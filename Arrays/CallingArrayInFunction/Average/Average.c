#include <stdio.h>
#include <stdlib.h>

int av(int arr[])
{
    int sum = 0, track = 0, i;

    for (i = 0; i < 49; i++)
    {
        sum = sum + arr[i];
        if (arr[i] == 0)
        {
            break;
        }
        track++;
    }
    return sum / track;
}

int avg(int *num)
{
    int i, track = 0, sum = 0;

    for (i = 0; i < 49; i++)
    {
        sum = sum + *(num + i);
        if (*(num + i) == 0)
        {
            break;
        }
        track++;
    }
    return sum / track;
}

int main()
{
    int i, j, arr[50];
    for (j = 0;; j++)
    {
        for (i = 0; i < 49; i++)
        {
            printf("Enter Number %d (Enter '0' to terminate) : ", (i + 1));
            scanf("%d", &arr[i]);
            if (arr[i] == 0)
            {
                break;
            }
        }
        /* OR...
        for(i=0;i<999;i++)
        {
            printf("Enter number %d : ", (i+1));
            scanf("%d", &*(arr+i));
            if(*(arr+i)==0)
            {
                break;
            }
        }*/

        printf("Average : %d\n", av(arr));  // METHOD 1
        printf("Average : %d\n", avg(arr)); // METHOD 2

        system("PAUSE");
    }
    return 0;
}