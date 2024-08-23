#include <stdio.h>

int binarySearch(int arr[], int find, int beg, int end)
{

    int mid;

    while (beg <= end)
    {
        mid = (beg + end) / 2;

        if (arr[mid] == find)
        {
            return mid;
        }
        else if (arr[mid] < find)
        {
            beg = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};

    int find = 2;

    int res = binarySearch(arr, find, 0, 4);

    if (res == -1)
    {
        printf("element is not found...?");
    }
    else
    {
        printf("element is found index no %d", res);
    }

    return 0;
}