#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a, b;

    //This Program will not take the b's input as when u enter the value 'a and press enter, 'enter' is also a Character and is taken by b.
    /*printf("Enter char 1 : ");
    scanf("%c", &a);
    printf("Enter char 2 : ");
    scanf("%c", &b);

    printf("a is %c and b is %c\n", a, b);*/

    //To avoid these use the following methods...

    //#1
  /*printf("Enter char 'a' : ");
    scanf("%c", &a);
    getchar();                      //It consumes the 'enter' Character.
    printf("Enter char 'b'  : ");
    scanf("%c", &b);

    printf("a is %c and b is %c\n", a, b);*/

    //#2

    printf("Enter char 'a' : ");
    scanf("%c", &a);
    printf("Enter char 'b' : ");
    scanf(" %c", &b); //Adding a space in front of %c.

    printf("a is %c and b is %c\n", a, b);

    system("PAUSE");
    return 0;
}