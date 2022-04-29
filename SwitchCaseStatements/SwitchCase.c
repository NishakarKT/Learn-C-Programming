#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;

    printf("Enter Integer 'a'\n");
    scanf("%d", &a);

    switch(a)
    {
        case 2:
        {
            printf("You Number Is 2\n");
        }
        break;
        case 3:
        {
            printf("Your Number Is 3\n");
        }
    }
    
    /* Without break; your result is = Your Number Is 2
                                       Your Number Is 3 */

    system("PAUSE");
    return 0 ;
}