#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{

    int roll;
    char name[100];
    int marks;

} std;  //now i can use either 'struct student' or just 'std'.

struct student
{

    int roll;
    char name[100];
    int marks;

} data[10000], c; //this way.

int main()
{
    int i, j, m, n;
    //std data[10000], c; //or this way.

    printf("Enter total number of students : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter Roll : ");
        scanf("%d", &data[i].roll);
        printf("Enter Name : ");
        scanf(" %[^\n]%*c", &data[i].name);
        printf("Enter Marks : ");
        scanf("%d", &data[i].marks);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (data[i].marks < data[j].marks)
            {
                c = data[i];
                data[i] = data[j];
                data[j] = c;
            }
        }
    }
    printf("RANK LIST ...\n");

    for (i = 0; i < n; i++)
    {
        printf("%d >>> %s (Marks = %d    Roll : %d)\n", (i + 1), data[i].name, data[i].marks, data[i].roll);
    }

    system("PAUSE");
    return 0;
}