#include <stdio.h>

int stack[5];

int top = -1;

void push(int element)
{
    if (top == 5 - 1)
    {
        printf("stack is full");
    }
    else
    {
        top++;
        stack[top] = element;

        printf("element is pushed of stack : \n", element);
    }
}
void main()
{

    push(10);

    push(20);

    push(30);

    push(40);

    push(50);
}