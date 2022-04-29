#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;

    printf("Enter Text : ");
    
    for(int i=0;;i++)
    {
        c=getchar();
        if(c==EOF)
        {break;}
        putchar(c);
    }
    printf("\n");

    system("PAUSE");
    return 0;
}