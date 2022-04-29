#include<stdio.h>
#include<stdlib.h>
//To visualise memory leak in task manager.

int main()
{
    int i;
    int *ptr;

    while(i<100000000)
    {
        printf("Hello World!!!\n");
        ptr=(int*)malloc(100000*sizeof(int));
        if(i%100==0)
        {
            system("PAUSE");
        }
        free(ptr); //it avoids memory leak.
        i++;
    }
    return 0 ;
}