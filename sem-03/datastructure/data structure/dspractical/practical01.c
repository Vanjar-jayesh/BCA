#include <stdio.h>
// int searchItem(int *, int);

int searchItem(int arr[], int search)
{
    int j = 0;
    for (j = 0; j < 5; j++)
    {
        if (arr[j] == search)
        {
            return j;
        }
        }
    return -1;
}
void main()
{
    int arr[5] = {15, 30, 18, 70, 12};
    int item = 12;

    int n = sizeof(arr) / sizeof(arr[0]);
    int result = searchItem(arr, item);

    if (result == -1)
    {
        printf("item no found..!\n");
    }
    else
    {
        printf("\n element %d is found at %d position ", item, result);
    }

    // return 0;
}

// long linear_search(long[], long, long);

// int main()
// {
//     long arry[5], search, c, n, position;

//     printf("input number of elements in arry : \n");
//     scanf("%d", &n);

//     printf("input %d number\n", c);

//     for (c = 0; c < n; c++)
//     {
//         scanf("Id", &search);
//     }

//     position = linear_search(arry, n, search);

//     if (position == -1)
//     {
//         printf("%d isn't presrnt in the arry.\n", search);
//     }
//     else
//     {
//         printf("%d is present at location %d.\n", search, position + 1);
//     }
//     return 0;
// }

// long linear_search(long a[], long n, long find)
// {
//     long c;
//     for (c = 0; c < n; c++)
//     {
//         if (a[c] == find)
//         {
//             return c;
//         }
//     }
//     return -1;
// }