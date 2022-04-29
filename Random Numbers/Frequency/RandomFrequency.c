#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, b, n, i, j;

    printf("Set Lower Limit : ");
    scanf("%d", &a);
    printf("Set Upper Limit : ");
    scanf("%d", &b);
    printf("Number of Trials : ");
    scanf("%d", &n);

    int outcomes[(b-a+1)];
    int collect[(b-a+1)];
    int trials[n];

    for (i = 0; i <= (b - a); i++)
    {
        outcomes[i] = a+i;
        collect[i]=0;
    }

    srand(time(NULL));

    for (i = 0; i < n; i++)
    {
        trials[i] = (rand() % (b - a + 1) + a);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= (b - a); j++)
        {
            if (trials[i]==outcomes[j])
            {
                collect[j]++;
            }
        }
    }
    
    for(i=0;i<=(b-a);i++)
    {
        printf("%d >>> %d\n", a+i, collect[i]);
    }

    system("PAUSE");
    return 0;
}