#include<stdio.h>
#include<stdlib.h>

int plus1(int i)
{
    static int m=10;  //As i call the function again, static int m=10 is ignored.
    return m++;
}

int main()
{
    int i, n;

    scanf("%d", &n);

    for(i=0;i<10;i++)
    {
        n = plus1(n);
        printf("%d\n", n);
    }

    system("pause");
    return 0 ;
}