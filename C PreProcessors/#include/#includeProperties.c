//Some examples of including the Header files to the Program from the System's Directory.
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <math.h>

//or we can also write as ...
#include <C:\Program Files (x86)\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\i686-w64-mingw32\include\stdio.h>

//To include a file from the same directory we use #include "filename.(ext)"
#include "power.c"

int main() //if the power.c also has a main function.. this program will throw an error as there can only be just one main function.
{
    int a, b;

    printf("Enter base number : ");
    scanf("%d", &a);
    printf("Enter index : ");
    scanf("%d", &b);

    printf("%d ^ %d = %d\n", a, b, power(a,b));

    system("PAUSE");
    return 0 ;
}