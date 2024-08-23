#include <stdio.h>

int binarysearch(int array[], int x, int beg, int end)
{

    while (beg <= end)
    {
        int mid = (beg + end) / 2;

        if (array[mid] == x)
        {
            return mid;
        }
        else if (array[mid] < x)
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
    int array[10] = {4, 10, 16, 24, 32, 46, 76, 112, 144, 186};

    int search = 144;

    int result = binarysearch(array, search, 0, 9);

    if (result == -1)
    {
        printf("not found");
    }
    else
    {
        printf("element is found at index %d", result);
    }
    return 0;
}