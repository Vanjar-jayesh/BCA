#include <stdio.h>
int main()
{
    int i, j, row, space;
    printf("enter of number of row : \n ");
    scanf("%d", &row);
    for (i = 0; i <= row; i++)
    {
        for (space = row; space > i; space--)
        {
            printf(" ");
        }
        for (j = 0; j <= i * 2; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    row++;
    for (i = 1; i < row; i++)
    {
        for (j = 0; j < (2 * row) / 3; j++)
        {
            printf("*");
        }
        for (j = 0; j < (2 * row) / 3; j++)
        {
            printf(" ");
        }
        for (j = 0; j < (2 * row) / 3; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}