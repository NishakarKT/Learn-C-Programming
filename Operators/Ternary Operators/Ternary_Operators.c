#include<stdio.h>

int main()
{
    int num[3], larger;

    for(int i=0;i<3;i++)
    {
        printf("Enter Number %d : ", i+1);
        scanf("%d", &num[i]);
    }
    //A substitute to if-else and switch-case
    larger = (num[0]>num[1]) ? (num[0]>num[2] ? printf("Largest Number is %d\n", num[0]) : printf("Largest Number is %d\n", num[2])) : (num[1]>num[2] ? printf("Largest Number is %d\n", num[1]) : printf("Largest Number is %d\n", num[2]));
    return 0 ;
}