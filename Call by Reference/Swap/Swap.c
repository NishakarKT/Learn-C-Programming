#include<stdio.h>
#include<stdlib.h>

int swap(int*x,int*y)
{
    int c;
    c=*x;
    *x=*y;
    *y=c;
}

int main()
{
    int a, b, c;

    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    //printf("Swapped!!!\na : %d\nb : %d\n", b, a);
    
    /*
    c=a;a=b;b=c;
    printf("Swapped!!!\na : %d\nb : %d\n", a, b);
    */

    swap(&a,&b);
    printf("Swapped!!!\na : %d\nb : %d\n", a, b);

    system("PAUSE");
    return 0 ;

}