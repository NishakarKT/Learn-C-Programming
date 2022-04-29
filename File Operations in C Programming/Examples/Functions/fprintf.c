#include <stdio.h>

int main()
{
    int m, n;
    FILE *fptr = NULL;
    fptr = fopen("sample.txt", "w");

    printf("Enter m : ");
    scanf("%d", &m);
    printf("Enter n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        fprintf(fptr, "%d x %d = %d\n", m, i, m * i);

    fclose(fptr);

    return 0;
}