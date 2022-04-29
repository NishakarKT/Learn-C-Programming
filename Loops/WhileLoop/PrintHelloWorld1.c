#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int i=0, n;

    printf("How Many Times Do You Want To Print\?\n");
    scanf("%d", &n);
    
    while(i<n)
    {
        printf("Hello World\n", i+=1);
    }

    system("PAUSE");
    return 0;
}
