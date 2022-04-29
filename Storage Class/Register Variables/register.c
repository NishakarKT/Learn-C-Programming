#include<stdio.h>
#include<stdlib.h>

int  main()
{
    int m, n, a=1;

    printf("Enter base number : ");
    scanf("%d", &m);
    printf("Enter Index : ");
    scanf("%d", &n);

    for(register int i=0;i<n;i++) //Register is used to register the variable in CPU Register ehich is closer to the Processor so that those variables which are required frequently could be accessed very fast.
    {
        a=a*m;
    }

    printf("%d ^ %d = %d\n", m, n, a);

    system("PAUSE");
    return 0 ;
}