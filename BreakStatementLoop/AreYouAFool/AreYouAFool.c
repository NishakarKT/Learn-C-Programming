#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, N;

    for (i=0;;i++)
    {
        printf("Are You A Fool\?\?\?\n1 = YES\n2 = NO\n", i);
        scanf("%d", &N);
        if (N==1)
        {break;}
    }
    printf("LOL!!!\nI KNEW IT!!!\a\a\a\n");
    system("PAUSE");
    return 0 ;
}