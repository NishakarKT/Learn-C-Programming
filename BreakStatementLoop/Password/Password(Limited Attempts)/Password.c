#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j, P, Q;

    for(i=0;i<1;i++)
    {
        printf("Enter Password.\n", i);
        scanf("%d", &P);
        if(P==123456789)
        {
            printf("ACCESS GRANTED!!!\n\aWELCOME!!!\n");
            break;
        }
        if(P!=123456789)
        {for(j=1;;j++)
            {
                printf("ACCESS DENIED!!!\nIncorrect Attempts : %d\n", j);
                printf("Enter Password.\n\a\a\a", j);
                scanf("%d", &Q);
                if(Q==123456789)
                {
                    printf("ACCESS GRANTED!!!\n\aWELCOME!!!\n\a");
                    break;
                }
                if(Q!=123456789, j<4)
                {
                    continue;
                }
                if(Q!=123456789, j>=4)
                {
                    printf("Incorrect Atempts : 5\n\a\a\a\a\aSORRY!\nACCESS DENIED!!!\nYou Exceeded The Limit Of Incorrect Attempts!!!\n");
                    system("PAUSE");
                    exit(0);
                }
                
            }
        }
        break;    
    }
    system("PAUSE");
    return 0 ;
   }