#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, k;
    char* id;

    int idl;

    printf("Enter total number of Employees : ");
    scanf("%d", &k);

    for(i=0;i<k;i++)
    {
        printf("How many characters are there in the Employee ID : ");
        scanf("%d", &idl);
        id=(char*)malloc(idl*sizeof(char));
        printf("Enter Employee %d ID : ", (i+1));
        scanf(" %[^\n]%*c", id);
        printf("Employee %d ID : %s\n", (i+1), id);
        free(id);
    }
    system("PAUSE");
    return 0 ;
}