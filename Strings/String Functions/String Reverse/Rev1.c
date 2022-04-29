#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void rev(char arr[])
{
    int i, n;
    char c;
    
    n=strlen(arr);

    if(n%2==0)
    {
        for(i=0;i<n/2;i++)
        {
            c=arr[i];
            arr[i]=arr[n-i-1];
            arr[n-i-1]=c;
        }
    }
    else if(n%2!=0)
    {
        for(i=0;i<(n-1)/2;i++)
        {
            c=arr[i];
            arr[i]=arr[n-i-1];
            arr[n-i-1]=c;
        }
    }
}

int main()
{
    char str[1000];

    printf("Enter text : ");
    gets(str);

    rev(str);

    printf("Reversed Text : %s\n", str);

    system("PAUSE");
    return 0 ;
}