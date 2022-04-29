#include<stdio.h>

int main()
{
    int num, index;

    printf("Enter a Number : ");
    scanf("%d", &num);
    printf("Enter 2's Power : ");
    scanf("%d", &index);

    printf("%d * 2^%d = %d\n", num, index, num<<index); //'<<' shifts the binary number digits to the Left. (= multiplying by 2 for each left shift)
    printf("%d / 2^%d = %d\n", num, index, num>>index); //'>>' shifts the binary number digits to the Right. (= dividing by 2 for each right shift)
    
    return 0 ;
}