#include<stdio.h>
#include<stdlib.h>

int main()
{
    int marks[10] = {100, 12, 45, 78, 90, 67, 78, 65, 93, 99};
    int i;

    for(i=0;i<=9;i++)
    {
    printf("markS[%d] = %d\n", i, marks[i]);
    if(i>9)
    {break;}
    }
    
    /*
    for(i=0;i<=8;i++)
    {
    printf("markS[%d] = %d\n", i, marks[i +1]);
    if(i>8)
    {break;}
    }
    */

system("PAUSE");
return 0;
}