#include <stdio.h>

int linearsearch(int arr[], int search)
{
    int j;
    for (j = 0; j < 5; j++)
    {
        if (arr[j] == search)
        {
            return j;
        }
    }

    return -1;
}

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};

    int find;

    printf("enter of search element : ");
    scanf("%d", &find);

    int found;

    found = linearsearch(arr, find);

    if (found == -1)
    {
        printf("element is not found ....");
    }
    else
    {
        printf("element is fount at index no %d", found);
    }

    return 0;
}

float;