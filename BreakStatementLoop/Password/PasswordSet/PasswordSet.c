#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j, P, Q;

    printf("Enter New Password.\n\a");
    scanf("%d", &P);

    for(i=0;i<1;i++)
    {
        printf("Enter Password.\n");
        scanf("%d", &Q);
        
        if(Q==P)
        {
            printf("ACCESS GRANTED!!!\nWELCOME.\n");
            break;
        }
        if(Q!=P)
        {
            for(j=1;;j++)
            {
                printf("ACCESS DENIED!!!\n\a\a\aIncorrect Attempts : %d\n", j);
                printf("Enter Password.\n");
                scanf("%d", &Q);
                if(Q==P)
                {
                    printf("ACCESS GRANTED!!!\nWelcome.\n");
                    break;
                }
                if(Q!=P, j<4)
                {
                    continue;
                }
                if(Q!=P, j>=4)
                {
                    printf("ACCESS DENIED!!!\nIncorrect Attempts : 5\nYou Exceeded The Limit Of Incorrect Attempts!!!\n\a\a\a");
                    system("PAUSE");
                    exit(0);
                }
            }
            break;
         }
    }
    system("PAUSE");
    return 0 ;
}