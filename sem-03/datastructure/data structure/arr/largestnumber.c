#include <stdio.h>
int main()
{
    int first, second, third;

    int x[] = {10, 4, 3, 50, 23, 90};

    if (x > first)
    {
        third = second;
        second = first;
        first = x;
    }
    else if (x > second && x != first)
    {
        third = second;
        second = x;
    }
    else if (x > third && x != second)
    {
        third = x;
    }

    printf("%d", first, second, third);
}
