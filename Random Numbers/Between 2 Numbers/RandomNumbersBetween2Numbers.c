#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, b, n;

    start:

    printf("Set Lower Limit : ");
    scanf("%d", &a);
    printf("Set Upper Limit : ");
    scanf("%d", &b);
    printf("Number of Random numbers do you want to generate : ");
    scanf("%d", &n);

    printf("Random Number between %d and %d is...\n");

    srand(time(NULL)); //To generate completely unpredictable random numbers.

    for (register int i = 0; i < n; i++)
    {
        printf("%d\n", (rand() % (b - a) + a));
    }
    goto start;

    return 0;
}