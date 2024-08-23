#include <stdio.h>
int main()
{
    int number[5] = {1, 2, 3, 4, 5};
    int i;
    for (i = 1; i <= 5; i++)
    {

        printf("Address of number[i]: %p %d\n", &number[i], i);
    }
    return 0;
}  