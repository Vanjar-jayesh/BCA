#include <stdio.h>

#define SIZE 5

int main()
{

    int i, j, temp;
    int arr[SIZE] = {13, 10, 67, 43, 11};

    for (i = 0; i < SIZE; i++)
    {
        printf("%d\t\n", arr[i]);
    }

    for (i = 0; i < SIZE - 1; i++)
    {
        for (j = 0; j < SIZE - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("afte sewping\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
