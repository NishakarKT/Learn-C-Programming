#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i=0, n;

    printf("Enter The Number Till Which You Want To Print The Numbers...\n");
    scanf("%d", &n);

    do{printf("%d\n", i+=1);}
    while(i<n);

    system("PAUSE");

    return 0 ;

}