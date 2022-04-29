#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("argc is %d\n", argc);

    printf("Arguments supplied are :\n");
    for (int i = 0; i < argc; i++)
    {
        printf("The argument at index %d is %s\n", i, argv[i]);
    }
    //for i=0, we get the argument : the file path of the program.exe
    
    system("PAUSE");
    return 0;
}
