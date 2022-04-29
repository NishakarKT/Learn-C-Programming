#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=10;
    float b=10.532;

    //printf("%d\n", a/4); //Result = 2
    //printf("%f\n", a/4); //Result = 0.000000 (ERROR)!!!
    //printf("%f\n", (float)a/4); // Result = 2.500000
    //printf("%0.2f\n", (float)a/4); // Result = 2.50
    //printf("%f\n", b/4); //Result = 2.633000
    //printf("%0.2f\n", b/4); //Result = 2.63
    //printf("%d\n", b/4); //Result = 1073741824 (ERROR)!!!
    //printf("%d\n", (int)b/4); //Result = 2

    system("PAUSE");
    return 0 ;
}