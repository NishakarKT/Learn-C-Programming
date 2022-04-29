#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, b;

start:

    printf("Lower Limit = 0\nSet Upper limit : ");
    scanf("%d", &b);
    printf("How many Random Numbers do you wish to display ?\n");
    scanf("%d", &n);

    srand(time(NULL)); //To generate completely unpredictable random numbers.

    for (register int i = 0; i < n; i++)
    {
        printf("<<< %d >>>\n", rand() % b); // This means random numbers from 0 to b is printed.
    }

    goto start;

    return 0;
}