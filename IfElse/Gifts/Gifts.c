#include<stdio.h>
#include<stdlib.h>

int main()
{
    int M, S, P, Q;

    printf("Enter Your Marks In Mathematics\n");
    scanf("%d",&M);

    printf("Enter Your Marks In Science\n");
    scanf("%d",&S);

    printf("Enter Passing Marks In Mathematics\n");
    scanf("%d",&P);

    printf("Enter Passing Marks In Science\n");
    scanf("%d",&Q);

    printf("Your Marks In Mathematics Is %d\n\a", M);
    printf("Your Marks In Science Is %d\n\a", S);
    printf("Passing Marks In Mathematics Is %d\n\a", P);
    printf("Passing Marks In Science Is %d\n\a", Q);

    if(M>P&&S>Q)
    {
        printf("CONGRATS!!!\nYou Will Get A Gengar Toy\n");
    }
    else if(M>P&&S<Q)
    {
        printf("CONGRATS!\nYou Will Get A Pidgey Toy\n");
    }
    else if(M<P&&S>Q)
    {
        printf("CONGRATS\nYou Will Get A Spearow Toy\n");
    }
    else if(M<P&&S<Q)
    {
        printf("SORRY!!!\nYou Failed In Both Mathematics And Science.\nNo Toy For You.\nBetter Luck Next Time.\n");
    }

    system("PAUSE");

    return 0 ;

} 