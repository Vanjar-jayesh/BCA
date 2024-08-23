#include <stdio.h>
int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
        return -1;
    }
}
int main(void)
{
    int arr[] = {
        10,
        50,
        30,
        60,
        70,
    };
    int x = 30;
    int n = sizeof(arr) / sizeof(arr[0]);

    // int n;
    // printf("enter of arr: ");
    // scanf("%d", &n);
    int result = search(arr, n, x);

    if (result == -1)
    {
        printf("element is  not paesent in array");
    }
    else
    {
        printf("element is paesent at index %d", result);
    }

    return 0;
}
