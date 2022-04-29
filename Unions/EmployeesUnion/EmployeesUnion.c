#include <stdio.h>
#include <stdlib.h>

union employees
{
    char sweepers[100];   //You can use only 1 of these in Union at a time.
    char programmers[100];
    char managers[100];
};

int main()
{
    int i, n;
    union employees data[1000];
    char c;

    printf("How many employees work at the organisation \?\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("s = Sweeper    p = Programmer    m = Manager\n");
        scanf(" %c", &c);

        if (c == 's')
        {
            printf("Enter Name : ");
            scanf(" %[^\n]%*c", &data[i].sweepers);
        }
        else if (c == 'p')
        {
            printf("Enter Name : ");
            scanf(" %[^\n]%*c", &data[i].programmers);
        }
        else if (c == 'm')
        {
            printf("Enter Name : ");
            scanf(" %[^\n]%*c", &data[i].managers);
        }
    }

    printf("EMPLOYEE LIST ...\n");
    
    for (i = 0; i < n; i++)
    {
        printf("%d >>> %s\n", (i + 1), data[i].sweepers); //Use either sweepers or managers or programmers..the output is same as they all share memory locations.
    }

    system("PAUSE");
    return 0;
}