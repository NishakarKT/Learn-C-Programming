#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, Z;
    
    for (i=0;;i++)
    {
        printf("Enter Password\n", i);
        scanf("%d", &Z);
        if(Z!=123456789)
        {printf("ACCESS DENIED!!!\n\a\a\a");}
        if(Z==123456789)
        {break;}
    }
    printf("ACCESS GRANTED!!!\n\a");
    system("PAUSE");
    return 0 ;
}    